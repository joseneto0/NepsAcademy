#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll c, n, p, v;
    cin >> c >> n;
    map<ll, ll> mp, ans;
    for (int i = 0; i < c; i++){
        cin >> p >> v;
        mp[p] = v;
    }
    for (int i = 0; i < n; i++){
        cin >> p >> v;
        if (mp[p] < v){
            ans[p] = v;
            mp[p] = v;
        }
    }
    for (auto i: ans){
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}