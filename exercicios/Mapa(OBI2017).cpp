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

vector<vector<char>> adj;
vector<vector<bool>> vis;
int n, m;
pair<int, int> ans;

bool isValid(int x, int y){
    if (x < 0 || x >= n || y < 0 || y >= m || vis[x][y]){
        return false;
    }
    return true;
}

void dfs(int i, int j){
    vis[i][j] = true;
    int fim = 1;
    bug2(i, j);
    for (int d = 0; d < 4; d++){
        int x = i + dx[d];
        int y = j + dy[d];
        if (isValid(x, y)){
            dfs(x, y);
            fim = 0;
        }
    }
    if (fim == 1){
        ans = {i, j};
    }
    return;
}

int main(){
    clock_t start_time = clock();
    ios;
    cin >> n >> m;
    adj.assign(n, vector<char>(m, ' '));
    vis.assign(n, vector<bool>(m, false));
    pair<int, int> start;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> adj[i][j];
            if (adj[i][j] == '.'){
                vis[i][j] = true;
            } else if (adj[i][j] == 'o'){
                start = {i, j};
            }
        }
    }
    dfs(start.first, start.second);
    cout << ans.first+1 << " " << ans.second+1 << "\n";
    double total_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;
	bugL(); bug(total_time);
    return 0;
}