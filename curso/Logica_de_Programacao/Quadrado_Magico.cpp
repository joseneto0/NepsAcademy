#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> matriz(n, vector<int>(n));
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }
    set<int> x;
    int soma1 = 0, soma2 = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            soma1 += matriz[i][j];
            soma2 += matriz[j][i];
        }
        x.insert(soma1);
        x.insert(soma2);
        soma1 = 0; soma2 = 0;
    }
    int j = 0;
    soma2 = 0;
    for (int i = 0; i < n; i++){
        soma2 += matriz[i][j];
        j++;
    }
    x.insert(soma2);
    soma2 = 0;
    j = n-1;
    for (int i = 0; i < n; i++){
        soma2 += matriz[i][j];
        j--;
    }
    x.insert(soma2);
    if (x.size() == 1){
        for (int i: x){
            esac(i);
        }
    }
    else esac(-1);
    return 0;
}