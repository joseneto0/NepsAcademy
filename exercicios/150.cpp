#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    cout << max({a, b, c}) << "\n";
    return 0;
}