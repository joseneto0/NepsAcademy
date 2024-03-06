#include <bits/stdc++.h>

using namespace std;

bool comparar(pair<string,int> &x, pair<string, int> &y) {
    return x.second < y.second;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, t;
    cin >> n >> t;
    vector<pair<string ,int>> nomes(n);
    for (int i= 0 ; i < n; i++){
        cin >> nomes[i].first >> nomes[i].second;
    }
    sort(nomes.begin(), nomes.end(), comparar);
    reverse(nomes.begin(), nomes.end());
    vector<vector<string>> times(t);
    int aux = 0;
    for (int i = 0; i < n; i++){
        if (aux == t){
            aux = 0;
        }
        times[aux].push_back(nomes[i].first);
        aux++;
    }
    for (int i = 0; i < t; i++){
        sort(times[i].begin(), times[i].end());
        cout << "Time " << i+1 << "\n";
        for (int j = 0; j < times[i].size(); j++){
            cout << times[i][j] << "\n";
        }
        if (i != t-1) cout << "\n";
    }
    return 0;
}