#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define lenLL(x) (ll)x.size()
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#ifdef EBUG
	#include "bug.hpp"
#else
	#define bug(x) { ; }
	#define bug2(x,y) { ; }
	#define bug3(x,y,z) { ; }
	#define bugV(V) { ; }
	#define bugP(V) { ; }
	#define bugL() { ; }
#endif

map<string, vector<string>> adj;
set<string> sequenciais;
map<string, int> dist;
string a, b;

void bfs(string v){
    queue<string> q;
    q.push(v);
    while (!q.empty()){
        string f = q.front();
        q.pop();
        if (f == b){
            esac(dist[f]);
            return;
        }
        for (auto x: adj[f]){
            if (!dist.count(x)){
                dist[x] = dist[f] + 1;
                q.push(x);
            }
        }

    }
}

int main(){
    clock_t start_time = clock();
    ios;
    int n;
    cin >> n;
    string x , y;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        sequenciais.insert(x);
        sequenciais.insert(y);
    }
    string ultima;
    for (auto x: sequenciais){
        if (!ultima.empty()){
            adj[x].push_back(ultima);
            adj[ultima].push_back(x);
        }
        ultima = x;
    }
    cin >> a >> b;
    bfs(a);
    double total_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;
	bugL(); bug(total_time);
    return 0;
}