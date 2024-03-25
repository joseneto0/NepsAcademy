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

int adj[255][255];
int dp[255][255];
int n, m;

void floyd_warshall(){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == j){
                dp[i][j] = 0;
            } else if (adj[i][j]){
                dp[i][j] = adj[i][j];
            } else {
                dp[i][j] = INF;
            }
        }
    }
    for (int k = 1; k <= n; k++){
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }
}

int main(){
    clock_t start_time = clock();
    ios;
    cin >> n >> m;
    int x, y, w;
    for (int i = 0; i < m; i++){
        cin >> x >> y >> w;
        adj[x][y] = w;
        adj[y][x] = w;
    }
    floyd_warshall();
    int ans = INF;
    for (int i = 1; i <= n; i++){
        int maior = 0;
        for (int j = 1; j <= n; j++){
            maior = max(maior, dp[i][j]);
        }
        ans = min(ans, maior);
    }
    esac(ans);
    double total_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;
	bugL(); bug(total_time);
    return 0;
}