#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, t, a, b;
    cin >> n >> m;
    map<pair<int, int>, bool> mp;
    for (int i =0 ; i < m; i++){
        cin >> t >> a>> b;
        if (t == 0){
            if (mp[{a,b}]){
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else {
            mp[{a,b}] = true;
            mp[{b,a}] = true;
        }
    }
    return 0;
}