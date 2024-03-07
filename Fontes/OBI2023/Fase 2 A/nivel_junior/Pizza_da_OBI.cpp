#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, g, m;
    cin >> n >> g >> m;
    g *= 8;
    m *= 6;
    int t= g + m;
    if (t <= n){
        cout << 0 << "\n";
    } else {
        cout << t - n << "\n";
    }
    return 0;
}