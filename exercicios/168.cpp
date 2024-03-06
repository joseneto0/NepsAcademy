#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, c, m, aux;
    cin >> n >> c >> m;
    map<int, int> mp;
    vector<int> a(c);
    for (int i = 0; i < c; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < m; i++){
        cin >> aux;
        if (mp.find(aux) != mp.end()) mp[aux]--;
    }
    int ans = 0;
    for (int i = 0; i < c; i++){
        if (mp[a[i]] > 0){
            ans++;
        }
    }
    esac(ans);
    return 0;
}