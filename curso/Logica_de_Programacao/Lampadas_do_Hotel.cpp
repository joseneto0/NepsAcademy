#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int ia, ib, fa, fb;
    cin >> ia >> ib >> fa >> fb;
    if (ib == fb){
        if (ia == fa){
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n";
        }
    } else {
        if (ia != fa){
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }
    return 0;
}