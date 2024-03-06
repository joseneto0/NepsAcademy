#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    map<int,int> v;
    v[a]++;
    v[b]++;
    v[c]++;
    if (min({v[a], v[b], v[c]}) == v[a]){
        cout << a << "\n";
    } else if (min({v[a], v[b], v[c]}) == v[b]){
        cout << b << "\n";
    } else {
        cout << c<< "\n";
    }
    return 0;
}