#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i =0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(all(b));
    vector<int> x;
    for (int i =0 ; i < n; i++){
        if (a[i] != b[i]){
            x.push_back(a[i]);
        }
    }
    esac(x.size());
    sort(all(x));
    if (x.size() > 0){
        for (int i: x){
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
