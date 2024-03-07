#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";
#define read(a, n) for (int i = 0; i < n; i++) cin >> a[i];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    read(a, n);
    for (int i = 0 ; i < n; i++){
        if (a[i] == 0){
            int cont = 1;
            if (i == 0){
                for (int j = i+1; j < n; j++){
                    if (a[j] == 0) break;
                    if (a[j] == -1) a[j] = cont;
                    else a[j] = min(a[j], cont);
                    if (cont < 9) cont++;
                }
            } else if (i < n-1) {
                for (int j = i-1; j >= 0; j--){
                    if (a[j] == 0) break;
                    if (a[j] == -1) a[j] = cont;
                    else a[j] = min(a[j], cont);
                    if (cont < 9) cont++;
                }
                cont = 1;
                for (int j = i+1; j < n; j++){
                    if (a[j] == 0) break;
                    if (a[j] == -1) a[j] = cont;
                    else a[j] = min(a[j], cont);
                    if (cont < 9) cont++;
                }
            } else {
                for (int j = i-1; j >= 0; j--){
                    if (a[j] == 0) break;
                    if (a[j] == -1) a[j] = cont;
                    else a[j] = min(a[j], cont);
                    if (cont < 9) cont++;
                }
            }
        }
    }
    for (int i: a){
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}