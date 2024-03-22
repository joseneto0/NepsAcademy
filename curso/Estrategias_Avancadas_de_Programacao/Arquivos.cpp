#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, b;
    cin >> n >> b;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    int l = 0, r = n-1;
    sort(all(a));
    while (l < r){
        if (a[l] + a[r] <= b){
            ans++;
            l++;
            r--;
        } else {
            ans++;
            r--;

        }
    }
    if (l == r) ans++;
    esac(ans);
    return 0;
}