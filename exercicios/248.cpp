#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int

bool cmp(pair<int, int> &x, pair<int, int> &y){
    return x.second < y.second;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(all(a));
    for (auto x: a){
        cout << x.first << " " << x.second << "\n";
    }
    return 0;
}