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
vector<vector<int>> dist;
int n;

bool isValid(int x, int y){
    if (x < 0 || x >= n || y < 0 || y >= n){
        return false;
    }
    return true;
}

void dijkstra(){
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    pq.push({dist[0][0], {0, 0}});
    while (!pq.empty()){
        int w = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();
        if (w == dist[x][y]){
            for (int d = 0; d < 4; d++){
                int a = x + dx[d];
                int b = y + dy[d];
                if (isValid(a, b)){
                    if (dist[a][b] > dist[x][y] + adj[a][b]){
                        dist[a][b] = dist[x][y] + adj[a][b];
                        pq.push({dist[a][b], {a, b}});
                    }
                }
            }
        }
    }
}

int main(){
    clock_t start_time = clock();
    ios;
    cin >> n;
    adj.assign(n, vector<int>(n, 0));
    dist.assign(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> adj[i][j];
            dist[i][j] = INF;
        }
    }
    dist[0][0] = adj[0][0];
    dijkstra();
    esac(dist[n-1][n-1]);
    double total_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;
	bugL(); bug(total_time);
    return 0;
}