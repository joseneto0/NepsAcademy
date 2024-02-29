#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int a, v, x, y, cont=0, teste=0;
    cin >> a >> v;
    while (a != 0 && v != 0){ 
        vector<int> visitados(a+1, 0);
        vector<int> fim;
        for (int i = 0; i < v; i++){
            cin >> x >> y;
            visitados[x]++;
            visitados[y]++;
        }
        teste++;
        int maior = *max_element(visitados.begin(), visitados.end());
        for (int i = 1; i <= a; i++){
            if (visitados[i] == maior){
                fim.push_back(i);
            }
        }
        sort(fim.begin(), fim.end());
        cout << "Teste " << teste << '\n';
        for (int i = 0; i < fim.size(); i++){
            cout << fim[i] << ' ';
        }
        cout << '\n';
        cout << '\n';
        cont = 0;
        cin >> a >> v;
    }
    return 0;
}