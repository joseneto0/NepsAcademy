#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, aux;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++){
        cin >> aux;
        q.push(aux);
    }
    int m;
    cin >> m;
    map<int, int> mp;
    for (int i = 0; i < m; i++){
        cin >> aux;
        mp[aux]++;
    }
    while(!q.empty()){
        int f = q.front();
        q.pop();
        if (mp[f] > 0){
            mp[f]--;
        } else {
            cout << f << " ";
        }
    }
    return 0;
}