#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n), ans(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cont = 0;
    for (int i = 0; i < n; i++){
        if (i == 0){
            if (a[i] == 1){
                cont++;
            }
            if (a[i+1] == 1){
                cont++;
            }
        } else if (i < n-1){
            if (a[i-1] == 1){
                cont++;
            } 
            if (a[i] == 1){
                cont++;
            }
            if (a[i+1] == 1){
                cont++;
            }
        } else {
            if (a[i-1] == 1){
                cont++;
            }
            if (a[i] == 1){
                cont++;
            }
        }
        ans[i] = cont;
        cont = 0;
    }
    for (int i: ans){
        esac(i);
    }
    return 0;
}