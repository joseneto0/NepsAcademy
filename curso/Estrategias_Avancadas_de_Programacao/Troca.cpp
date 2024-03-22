#include <bits/stdc++.h>

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define MAX 100010

using namespace std;



int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, q, x ,y;
    cin >> n >> q;
    vector<int> a(MAX), b(MAX);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++){
        cin >> b[i];
    }
    vector<int> op(MAX);
    for (int i = 0; i < q; i++){
        cin >> x>> y;
        op[x]++;
        op[y+1]--;
    }
    vector<int> pref(MAX);
    pref[0] = 0;
    for (int i = 1; i <= n; i++){
        pref[i] = pref[i-1] + op[i];
    }   
    for (int i = 1; i <= n; i++){
        if (pref[i] % 2 == 0){
            cout << a[i] << " ";
        } else {
            cout << b[i] << " ";
        }
    }
    return 0;
}