#include <bits/stdc++.h>

using namespace std;

int kadane(vector<int> &a, int n, bool todos_negativos){
    int soma_atual = 0, soma_total = 0;
    for (int i = 0; i < n; i++){
        if (!todos_negativos) soma_atual += a[i];
        else soma_atual = a[i];
        if (soma_atual < 0 && !todos_negativos){
            soma_atual = 0;
        }
        soma_total = max(soma_atual, soma_total);
    }
    return soma_total;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    bool todos_negativos = true;
    for (int i = 0 ; i < n; i++){
        cin >> a[i];
        if (a[i] > 0){
            todos_negativos = false;
        }
    }
    cout << kadane(a, n, todos_negativos) << "\n";
    return 0;
}