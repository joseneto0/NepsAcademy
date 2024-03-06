#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, aux;
    cin >> n;
    set<int> x;
    for (int i = 0; i < n; i++){
        cin >> aux;
        x.insert(aux);
    }
    cout << x.size() << "\n";
    return 0;
}