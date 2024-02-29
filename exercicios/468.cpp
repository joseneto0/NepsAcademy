#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> prefix(n);
    int cont = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i == 0) {
            prefix[i] = a[i];
            if (prefix[i] > k){
                if (a[i] < k){
                    prefix[i] = a[i];
                } else {
                    prefix[i] = 0;
                }
            } else if (prefix[i] == k){
                cont++;
            }
        } else {
            prefix[i] = prefix[i-1] + a[i];
            if (prefix[i] > k){
                if (a[i] < k){
                    prefix[i] = a[i];
                } else {
                    prefix[i] = 0;
                }
            } else if (prefix[i] == k){
                cont++;
            }
        }
    }
    cout << cont << "\n";
    return 0;
}