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
    vector<pair<int, int>> a(3);
    for (int i = 0; i < 3; i++){
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(all(a));
    for (int i = 0; i < 3; i++){
        cout << a[i].second << "\n";
    }
    return 0;
}