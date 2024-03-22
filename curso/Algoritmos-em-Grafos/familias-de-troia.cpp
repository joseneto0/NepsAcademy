#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(),x.end()
#define len(x) (int)x.size()
#define esac(x) cout << x << "\n"
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

void dfs(int v){
    vis[v] = true;
    for (auto x: adj[v]){
        if (!vis[x]){
            dfs(x);
        }
    }
}

int main(){
    ios;
    int n, m, x, y;
    cin >> n >> m;
    adj.assign(n+1, vector<int>());
    vis.assign(n+1, false);
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++){
        if (!vis[i]){
            dfs(i);
            ans++;
        }
    }
    esac(ans);
    return 0;
}