#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int a, b, aux;
    cin >> a >> b;
    set<int> x, y, z;
    for (int i = 0; i < a; i++){
        cin >> aux;
        x.insert(aux);
    }
    for (int i = 0; i < b; i++){
        cin >> aux;
        y.insert(aux);
    }
    map<int, int> mp, mp2;
    for (auto i: x){
        mp[i]++;
    }
    for (int i: y){
        mp2[i]++;
    }
    set<int> ans1, ans2;
    for (int i = 1; i <= 100000; i++){
        if (mp[i] == 0 && mp2[i] == 1){
            ans2.insert(i);
        } else if (mp[i] == 1 && mp2[i] == 0){
            ans1.insert(i);
        }
    }
    cout << min(ans1.size(), ans2.size()) << "\n";
    return 0;
}