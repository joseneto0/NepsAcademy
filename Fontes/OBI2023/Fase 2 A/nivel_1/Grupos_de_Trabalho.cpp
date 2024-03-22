#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int e, m, d, a, b, c;
    cin >> e >> m >> d;
    vector<int> grp(e+1, -1);
    vector<pair<int, int>> positivos(m), negativos(d);
    for (int i = 0; i < m; i++){
        cin >> positivos[i].first >> positivos[i].second;
    }
    for (int i = 0; i < d; i++){
        cin >> negativos[i].first >> negativos[i].second;
    }
    for (int i = 0 ; i < e/3; i++){
        cin >> a >> b >> c;
        grp[a] = i;
        grp[b] = i;
        grp[c] = i;
    }
    int ans = 0;
    for (auto i: positivos){
        if (grp[i.first] != grp[i.second]){
            ans++;
        }
    }
    for (auto i: negativos){
        if (grp[i.first] == grp[i.second]){
            ans++;
        }
    }
    esac(ans);
    return 0;
}