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

int dx[] = {1, 0, -1, 0, -1, 1, -1, 1};
int dy[] = {0, 1, 0, -1, -1, 1, 1, -1};

vector<vector<bool>> adj;
int ans = 0;
int n, m;

bool isValid(int x, int y){
    if (x < 1 || x > n || y < 1 || y > m || adj[x][y]){
        return false;
    }
    return true;
}

void dfs(int i, int j){
    adj[i][j] = true;
    ans++;
    for (int d = 0; d < 8; d++){
        if (isValid(i + dx[d], j + dy[d])){
            dfs(i + dx[d], j + dy[d]);
        }
    }
}

int main(){
    clock_t start_time = clock();
    ios;
    int x, y, k, a, b;
    cin >> n >> m >> x >> y >> k;
    adj.assign(n+1, vector<bool>(m+1, false));
    for (int i = 0; i < k; i++){
        cin >> a >> b;
        adj[a][b] = true;
    }
    dfs(x, y);
    esac(ans);
    double total_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;
	bugL(); bug(total_time);
    return 0;
}