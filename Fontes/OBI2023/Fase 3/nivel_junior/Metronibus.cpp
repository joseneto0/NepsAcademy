#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

const int MAXN = 100005;
const int INF = 1e9 + 10;

using namespace std;

vector<vector<pair<int,int>>> adj;

int vtx(int x, int y) {
    return 2 * y - 1 + x;
}

int bfs(int a, int b){
    int n = adj.size();
    vector<int> dist(n+1, INF);
    deque<int> dq;
    dist[a] = 1;
    dq.push_back(a);
    while (!dq.empty()){
        int f = dq.front();
        dq.pop_front();
        for (auto x: adj[f]){
            int w = x.first;
            int d = x.second;
            if (dist[w] < INF){
                continue;
            }
            dist[w] = dist[f] + d;
            if (d == 0){
                dq.push_front(w);
            } else {
                dq.push_back(w);
            }
        }
    }
    return min(dist[vtx(0, b)], dist[vtx(1, b)]);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k1, k2, p, x, y, a, b;
    cin >> n >> k1 >> k2 >> p;
    n *= 2;
    adj.assign(n+1, vector<pair<int,int>>());
    for (int i = 0; i < k1; i++){
        cin >> x >> y;
        adj[vtx(0, x)].push_back({vtx(0, y), 0});
        adj[vtx(0, y)].push_back({vtx(0, x), 0});
    }
    for (int i = 0; i < k2; i++){
        cin >> x >> y;
        adj[vtx(1, x)].push_back({vtx(1, y), 0});
        adj[vtx(1, y)].push_back({vtx(1, x), 0});
    }
    for (int i = 1; i <= n/2; i++){
        adj[vtx(0, i)].push_back({vtx(1, i), 1});
        adj[vtx(1, i)].push_back({vtx(0, i), 1});
    }
    cin >> a >> b;
    int ans_onibus = bfs(vtx(0, a), b);
    int ans_trem = bfs(vtx(1, a), b);
    if (ans_onibus == INF && ans_trem == INF){
        esac(-1);
    } else {
        esac(min(ans_trem, ans_onibus) * p);
    }
    return 0;
}