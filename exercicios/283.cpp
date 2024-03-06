#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

void solve(){
    int m, n;
    cin >> m >> n;
    map<string, string> mp;
    string s, aux, trad;
    stringstream x;
    for (int i = 0; i < m; i++){
        cin >> s;
        cin.ignore();
        getline(cin, trad);
        mp[s] = trad;
        x.clear();
    }
    x.clear();
    aux = "";
    for (int i = 0; i < n; i++){
        getline(cin, s);
        x << s;
        string ans = "";
        while (x >> aux){
            if (mp.find(aux) != mp.end()){
                ans += mp[aux] + " ";
            } else {
                ans += aux + " ";
            }
        }
        for (int i = 0; i < ans.size()-1; i++){
            cout << ans[i];
        }
        cout << "\n";
        x.clear();
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
        cout << "\n";
    }    
    return 0;
}