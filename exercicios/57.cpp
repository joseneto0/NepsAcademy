#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

int cont = 0;


vector<vector<bool>> vis;
vector<vector<int>> matriz;

int dRow[] = { -1, 0, 1, 0 };
int dCol[] = { 0, 1, 0, -1 };

int n, m;
bool isValid(int row, int col){
    if (row < 0 || col < 0 || row >= n || col >= m || matriz[row][col] == 0) return false;
    if (vis[row][col]) return false;
    return true;
}

void bfs(pair<int, int> u){
    queue<pair<int, int>> q;
    q.push(u);
    vis[u.first][u.second] = true;
    while (!q.empty()){
        cont++;
        pair<int, int> f = q.front();
        if (matriz[f.first][f.second] == 2){
            return;
        }
        // cout << matriz[f.first][f.second] << " ";
        q.pop();
        for (int i = 0; i < 4; i++){
            int x = f.first + dRow[i];
            int y = f.second + dCol[i];
            if (isValid(x, y)){
                q.push({x, y});
                vis[x][y] = true;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    vis.assign(n+1, vector<bool>(m+1, false));
    matriz.assign(n, vector<int>(m));
    pair<int, int> inicio;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matriz[i][j];
            if (matriz[i][j] == 3) inicio = {i,j};
        }
    }
    bfs(inicio);
    // cout << "\n";
    cout << cont << "\n";
    return 0;
}