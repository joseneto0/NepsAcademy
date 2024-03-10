#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<vector<int>> matriz(n, vector<int>(n));
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }
    vector<int> linhas(n), colunas(n);
    for (int i = 0; i < n ; i++){
        linhas[i] = accumulate(all(matriz[i]), 0);
    }
    for (int i = 0; i < n; i++){
        int col = 0;
        for (int j = 0; j < n; j++){
            col += matriz[j][i];
        }
        colunas[i] = col;
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            ans = max(ans, linhas[i] + colunas[j] - matriz[i][j] - matriz[i][j]);
        }
    }
    esac(ans);
    return 0;
}