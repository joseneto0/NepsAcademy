#include <bits/stdc++.h>

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()

using namespace std;

void kadane(vector<int> &a, int n){
    int atual = 0, maior = 0;
    for (int i = 0; i < n; i++){
        atual += a[i];
        maior = max(maior, atual);
        if (atual <= 0){
            atual = 0;
        }
    }
    pair<int, int> ans = {0,0};
    int l = 0, r = 0;
    atual = 0;
    for (int i = 0; i < n; i++){
        atual += a[i];
        if (atual == maior && r - l >= ans.second - ans.first){
            ans = {l+1, r+1};
        }
        if (atual < 0){
            l = i+1;
            r = i+1;
        } else {
            r++;
        }
        if (atual <= 0) atual = 0;
    }
    if (maior <= 0) cout << "nenhum" << "\n";
    else cout << ans.first << " " << ans.second << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, teste = 1;
    while (cin >> n){
        if (!n) break;
        vector<int> a(n);
        int x, y;
        for (int i = 0; i < n; i++){
            cin >> x >> y;
            a[i] = x-y;
        }
        cout << "Teste " << teste << "\n";
        kadane(a, n);
        cout << "\n";
        teste++;
    }
    return 0;
}