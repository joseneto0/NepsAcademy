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

vector<vector<int>> adj;
vector<vector<bool>> vis;
vector<vector<int>> dist;
vector<pair<int, int>> saidas;
int n, m;

bool isValid(int x, int y){
    if (x < 0 || x >= n || y < 0 || y >= m || vis[x][y]){
        return false;
    }
    return true;
}

void bfs(int i, int j){
    queue<pair<int, int>> q;
    q.push({i, j});
    dist[i][j] = 0;
    while (!q.empty()){
        int fx = q.front().first;
        int fy = q.front().second;
        vis[fx][fy] = true;
        q.pop();
        for (int d = 0; d < 4; d++){
            if (isValid(fx + dx[d], fy + dy[d]) && dist[fx + dx[d]][fy + dy[d]] > dist[fx][fy]+1){
                q.push({fx + dx[d], fy + dy[d]});
                dist[fx + dx[d]][fy + dy[d]] = dist[fx][fy]+1;
            }
        }
    }
}


int main(){
    clock_t start_time = clock();
    ios;
    cin >> n >> m;
    adj.assign(n, vector<int>(m, 0));
    vis.assign(n, vector<bool>(m, false));
    dist.assign(n, vector<int>(m, INT_MAX));
    int sI, sJ;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> adj[i][j];
            if (adj[i][j] == 3){
                sI = i;
                sJ = j;
            } else if (adj[i][j] == 2){
                vis[i][j] = true;
            } else if (adj[i][j] == 0){
                saidas.push_back({i, j});
            }
        }
    }
    bfs(sI, sJ);
    int ans = INT_MAX;
    for (auto x: saidas){
        ans = min(ans, dist[x.first][x.second]);
    }
    esac(ans);
    double total_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;
	bugL(); bug(total_time);
    return 0;
}