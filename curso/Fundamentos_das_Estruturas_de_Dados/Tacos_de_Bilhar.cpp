#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, aux, ans = 0;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> aux;
        if (mp[aux] > 0){
            mp[aux]--;
        } else {
            mp[aux]++;
            ans += 2;
        }
    }
    cout << ans << "\n";
    return 0;
}