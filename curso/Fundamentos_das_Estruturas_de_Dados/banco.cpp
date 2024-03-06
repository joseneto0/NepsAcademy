#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int c, n, t, d, atual =0, ans = 0;
    cin >> c >> n;
    if (c >= n){
        cout << 0 << "\n";
        return 0;
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < c; i++){
        cin >> t >> d;
        pq.push(t+d);
    }
    for (int i = c; i < n; i++){    
        cin >> t >> d;
        atual = pq.top();
        pq.pop();
        if (atual - t > 20){
            ans++;
        }
        pq.push(max(atual, t) + d);
    }
    cout << ans << "\n";
    return 0;
}