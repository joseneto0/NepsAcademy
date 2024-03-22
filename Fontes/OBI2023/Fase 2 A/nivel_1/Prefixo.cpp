#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n";
#define all(x) x.begin(), x.end()

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n;
    string s1, s2;
    cin >> s1;
    cin >> m;
    cin >> s2;
    int ans = 0;
    for (int i = 0; i < min(m, n); i++){
        if (s1[i] == s2[i]){
            ans++;
        } else {
            break;
        }
    }
    esac(ans);
    return 0;
}