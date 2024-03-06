#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<char> vencedores[5];
    for (char i = 'A'; i <= 'P'; i++){
        vencedores[0].push_back(i);
    }
    for (int i = 1; i <= 4; i++){
        for (int j = 0; j < vencedores[i-1].size(); j+=2){
            int eq1 = vencedores[i-1][j];
            int eq2 = vencedores[i-1][j+1];
            int g1, g2;
            cin >> g1 >> g2;
            if (g1 > g2){
                vencedores[i].push_back(eq1);
            } else {
                vencedores[i].push_back(eq2);
            }
        }
    }
    cout << vencedores[4][0] << "\n";
    return 0;
}