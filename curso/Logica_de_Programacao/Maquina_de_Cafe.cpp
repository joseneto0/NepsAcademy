#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    vector<int> a(3);
    for (int i = 0; i < 3; i++){
        cin >> a[i];
    }
    int ans1 = a[0] * 4 + a[1] * 2;
    int ans2 = a[0] * 2 + a[2] * 2;
    int ans3 = a[1] * 2 + a[2] * 4;
    cout << min({ans1, ans2, ans3}) << "\n";
    return 0;
}