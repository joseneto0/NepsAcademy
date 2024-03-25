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

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

vector<vector<pair<int,int>>> adj;
vector<bool> vis;
vector<int> dist;
int n, m;

void dijkstra(int s){
    priority_queue<pair<int, int>> pq;
    dist[s] = 0;
    pq.push({0, s});
    for (int i = 0; i < n+2; i++){
        int atual;
        while (true){
            atual = pq.top().second;
            pq.pop();
            if (!vis[atual]){
                break;
            }
        }
        vis[atual] = true;
        for (auto x: adj[atual]){
            int v = x.first;
            int w = x.second;
            if (dist[v] > dist[atual] + w){
                dist[v] = dist[atual] + w;
                pq.push({-dist[v], v});
            }
        }
    }
}

int main(){
    clock_t start_time = clock();
    ios;
    cin >> n >> m;
    adj.assign(n+2, vector<pair<int,int>>());
    vis.assign(n+2, false);
    dist.assign(n+2, INF);
    int s, t, b;
    for (int i = 0; i < m; i++){
        cin >> s >> t >> b;
        adj[s].push_back({t, b});
        adj[t].push_back({s, b});
    }
    dijkstra(0);
    bugV(dist);
    esac(dist[n+1]);
    double total_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;
	bugL(); bug(total_time);
    return 0;
}