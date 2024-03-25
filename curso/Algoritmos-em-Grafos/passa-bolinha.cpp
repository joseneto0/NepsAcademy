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
int ans = 0;
int n;

bool isValid(int x, int y, int paiX, int paiY){
    if (x < 0 || x >= n || y < 0 || y >= n || vis[x][y] || adj[x][y] < adj[paiX][paiY]){
        return false;
    }
    return true;
}

void dfs(int i, int j){
    vis[i][j] = true;
    ans++;
    for (int d = 0; d < 4; d++){
        if (isValid(i + dx[d], j + dy[d], i, j)){
            dfs(i + dx[d], j + dy[d]);
        }
    }
}

int main(){
    clock_t start_time = clock();
    ios;
    cin >> n;
    int x, y;
    cin >> x >> y;
    adj.assign(n, vector<int>(n, 0));
    vis.assign(n, vector<bool>(n, false));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> adj[i][j];
        }
    }
    x--; y--;
    dfs(x, y);
    esac(ans);
    double total_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;
	bugL(); bug(total_time);
    return 0;
}