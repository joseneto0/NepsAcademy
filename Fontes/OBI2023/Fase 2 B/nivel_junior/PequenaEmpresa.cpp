#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

const int MAXN = 100005;

using namespace std;

vector<vector<int>> adj;
vector<int> salarios;
vector<bool> vis;
int ans = 0;

void dfs(int u){
    for (auto x: adj[u]){
        if (salarios[x] > salarios[u] && !vis[u]){
            vis[u] = true;
            ans++;
        }
        dfs(x);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x, y, a;
    cin >> n;
    adj.assign(n+1, vector<int>());
    salarios.assign(n+1, 0);
    vis.assign(n+1, false);
    for (int i = 1; i <= n; i++){
        cin >> x >> y;
        if (i != 1) adj[x].push_back(i);
        salarios[i] = y;
    }
    dfs(1);
    esac(ans);
    cin >> a;
    for (int i = 0; i < a; i++){
        ans = 0;
        cin >> x >> y;
        salarios[x] = y;
        vis.assign(n+1, false);
        dfs(1);
        esac(ans);
    }
    return 0;
}