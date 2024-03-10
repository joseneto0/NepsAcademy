#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

const int MAXN = 100005;

using namespace std;
vector<vector<char>> adj;
vector<vector<bool>> vis;
int ans = 0;
int m;

bool certo = false;
bool jogado = false;

bool isValid(int x, int y){
    if (x < 0 || y < 0 || x >= m || y >= m){
        jogado = true;
        return false;
    }
    if (vis[x][y]) return false;
    return true;
}


void dfs(int i, int j){
    if (adj[i][j] == 'X'){
        certo = true;
        return;
    }
    vis[i][j] = true;
    ans++;
    if (adj[i][j] == 'N' && isValid(i-1, j)){
        dfs(i-1, j);
    }
    if (adj[i][j] == 'S' && isValid(i+1, j)){
        dfs(i+1, j);
    }
    if (adj[i][j] == 'L' && isValid(i, j+1)){
        dfs(i, j+1);
    }
    if (adj[i][j] == 'O' && isValid(i, j-1)){
        dfs(i, j-1);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b;
    cin >> m;
    adj.assign(m, vector<char>(m, ' '));
    vis.assign(m, vector<bool>(m, false));
    for (int i = 0 ; i < m; i++){
        for (int j = 0; j < m; j++){
            cin >> adj[i][j];
        }
    }
    cin >> a >> b;
    a--; b--;
    dfs(a, b);
    if (certo) {
        esac(ans);
    }
    else {
        if (jogado){
            esac(-1);
        } 
        else {
            esac(0);
        }
    }
    return 0;
}