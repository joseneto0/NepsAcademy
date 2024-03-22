#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, d;
    cin >> n >> d;
    vector<int> a(n), pref(n), suf(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int soma = 0, ans = 0, j =0, ans2=0;
    for (int i = 0; i < n; i++){
        while (j < n && soma + a[j] <= d){
            soma += a[j];
            j++;
        }
        if (soma == d){
            ans++;
        }
        soma -= a[i];
    }
    pref[0] = a[0];
    for (int i = 1; i < n; i++){
        pref[i] += pref[i-1] + a[i];
    }
    suf[n-1] = a[n-1];
    for (int i = n-2; i >= 0; i--){
        suf[i] += suf[i+1] + a[i];
    }
    map<int, int> cont;
    for (int i = n-2; i >= 0; i--){
        cont[suf[i+1]]++;
        if (pref[i] < d){
            ans += cont[d - pref[i]];
        }
    }
    cout << ans + ans2 << "\n";
    return 0;
}