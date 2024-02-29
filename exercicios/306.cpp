#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    int soma = 0, maior = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            soma += a[j];
            maior = max(maior, soma);
        }
        soma = 0;
    }
    cout << maior << "\n";
    return 0;
}