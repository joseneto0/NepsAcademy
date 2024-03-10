#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    vector<int> a(4);
    for (int i = 0; i < 4; i++){
        cin >> a[i];
    }
    sort(all(a));
    cout << abs((a[3]+a[0]) - (a[1]+a[2])) << "\n";
    return 0;
}