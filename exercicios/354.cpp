#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

vector<vector<int>> adj;
vector<int> pesos;

int dfs(int u){
    if (adj[u].size() == 0) return pesos[u] = 1;
    int cont = 1;
    for (auto x: adj[u]){
        cont += dfs(x);
    }
    return pesos[u] = cont;
}

bool balanceado(int u){
    if (adj[u].size() == 0){
        return true;
    }

    int atual = pesos[adj[u][0]];
    for (auto x: adj[u]){
        if (atual != pesos[x] || !balanceado(x)){
            return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x, y;
    cin >> n;
    adj.assign(n+1, vector<int>());
    pesos.assign(n+1, 0);
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        adj[y].push_back(x);
    }
    dfs(0);
    if (balanceado(0)){
        cout << "bem" << "\n";
    } else {
        cout << "mal" << "\n";
    }
    return 0;
}