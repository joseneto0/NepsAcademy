#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int m, n;
    cin >> m >> n;
    char matriz[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }
    int cont=0;
    bool a = false;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (matriz[i][j] == '#'){
                if (i == 0){
                    cont++;
                    a = true;
                }
                if (i == n-1 && !a){
                    cont++;
                    a = true;
                }
                if (j == 0 && !a){
                    cont++;
                    a = true;
                }
                if (j == n-1 && !a){
                    cont++;
                    a = true;
                }
                
                if (i-1 >= 0 && !a){
                    if (matriz[i-1][j] == '.'){
                        cont++;
                        a = true;
                    } 
                }
                
                if (j-1 >= 0 && !a){
                    if (matriz[i][j-1] == '.'){
                        cont++;
                        a = true;
                    } 
                } 
                if (i+1 < m && !a){
                    if (matriz[i+1][j] == '.' ){
                        cont++;
                        a = true;
                    } 
                } 
                if (j+1 < n && !a){
                    if (matriz[i][j+1] == '.'){
                        cont++;
                        a = true;
                    } 
                }
                
            }
            a = false;
        }
    }
    cout << cont << '\n';
    return 0;
}