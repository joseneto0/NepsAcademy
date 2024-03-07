#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

int quad(int x, int y, int n){
    if (x > n/2 && y > n/2){
        return 1;
    }
    if (x <= n/2 && y <= n/2){
        return 3;
    }
    if (x <= n/2 && y > n/2){
        return 2;
    }
    return 4;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n = 10;
    vector<int> a(n);
    vector<vector<int>> freq(n+1, vector<int>());
    for (int i = 0 ; i < n; i++){
        cin >> a[i];
        freq[a[i]].push_back(i);
    }
    int menor = *min_element(all(a));
    cout << "Menor: " << menor << "\n";
    cout << "Ocorrencias:";
    for (int i: freq[menor]){
        cout << " " << i;
    }
    cout << "\n";
    for (int i = 0; i < n; i++){
        if (a[i] == menor){
            a[i] = -1;
        }
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}