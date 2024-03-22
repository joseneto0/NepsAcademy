#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n";
#define all(x) x.begin(), x.end()


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    map<int, int> mp;
    int ans = 0, j = 0;
    for (int i = 0; i < n; i++){
        if (mp.count(a[i])){
            j = max(j, mp[a[i]]+1);
        }
        ans = max(ans, i - j+1);
        mp[a[i]] = i;
    }
    esac(ans);
    return 0;
}