#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, cont = 0;
    vector<int> a(3);
    cin >> n;
    for (int i = 0; i < 3; i++){
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    for (int i = 2; i >= 0; i--){
        n -= a[i];
        if (n >= 0) cont++;
        else break;
    }
    cout << cont << "\n";
    return 0;
}