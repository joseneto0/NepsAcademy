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

vector<vector<int>> adj;
vector<bool> vis;
vector<int> dist;
set<int> ans;
int c, e, l, p;

void bfs(int v){
    queue<int> q;
    q.push(v);
    vis[v] = true;
    while (!q.empty()){
        int f = q.front();
        q.pop();
        for (auto x: adj[f]){
            if (!vis[x]){
                q.push(x);
                vis[x] = true;
                dist[x] = dist[f] + 1;
            }
        }
    }
}

int main(){
    clock_t start_time = clock();
    ios;
    int teste = 1;
    while (cin >> c >> e >> l >> p){
        if (!c && !e && !l && !p) break;
        adj.assign(c+1, vector<int>());
        vis.assign(c+1, false);
        dist.assign(51, 0);
        int x, y;
        for (int i = 0; i < e; i++){
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dist[l] = 0;
        bfs(l);
        bug2(l, p);
        bugV(dist);
        cout << "Teste " << teste << "\n";
        for (int i = 1; i <= c; i++){
            if (dist[i] > 0 && dist[i] <= p){
                bug(dist[i]);
                ans.insert(i);
            }
        }
        for (int i: ans){
            if (i == l) continue;
            cout << i << " ";
        }
        cout << "\n";
        teste++;
        cout << "\n";
        ans.clear();
    }
    double total_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;
	bugL(); bug(total_time);
    return 0;
}