#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n";
#define all(x) x.begin(), x.end()

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matriz(m, vector<int>(n));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }
    int p, x, y, ans = 0;
    cin >> p;
    for (int i = 0; i < p; i++){
        cin >> x >> y;
        x--; y--;
        if (matriz[x][y] > 0){
            matriz[x][y]--;
            ans++;
        }
    }
    esac(ans);
    return 0;
}