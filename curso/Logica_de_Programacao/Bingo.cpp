#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k, u, aux;
    cin >> n >> k >> u;
    vector<vector<int>> a(u+1);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            cin >> aux;
            a[aux].push_back(i+1);
        }
    }
    vector<int> tempos(n+1, 0);
    set<int> x;
    for (int i = 0; i < u && x.empty(); i++){
        cin >> aux;
        for (int j: a[aux]){
            if (++tempos[j] == k){
                x.insert(j);
            }
        }
    }
    for (int i: x){
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}