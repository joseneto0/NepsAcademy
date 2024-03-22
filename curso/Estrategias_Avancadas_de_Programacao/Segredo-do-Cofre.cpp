#include <bits/stdc++.h>

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()

using namespace std;

const ll MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, aux, anterior = 0;
    cin >> n >> m;
    vector<int> a(n);
    vector<vector<int>> freq(10, vector<int>(n+1, 0));
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        freq[a[i]][i]++;
        for (int j = 0; j < 10; j++){
            freq[j][i] += freq[j][i-1];
        }
    }
    vector<int> ans(10);
    for (int i = 0; i < m; i++){
        cin >> aux;
        for (int j = 0; j < 10; j++){
            if (aux > anterior){
                ans[j] += freq[j][aux] - freq[j][anterior];
            } else {
                ans[j] += freq[j][anterior-1] - freq[j][aux-1];
            }
        }
        anterior = aux;
    }
    for (int i: ans){
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}