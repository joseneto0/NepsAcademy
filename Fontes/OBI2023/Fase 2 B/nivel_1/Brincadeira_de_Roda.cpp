#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, i, p;
    cin >> n >> i >> p;
    vector<int> a(n+1);
    for (int j = 1; j <= n; j++){
        a[j] = j;
    }
    while (p > 0){
        i++;
        if (i > n){
            i = 1;
        }
        p--;
    }
    cout << i << "\n";
    return 0;
}