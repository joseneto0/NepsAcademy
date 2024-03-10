#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

const int MAXN = 100005;

using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (int i = 0 ; i < n; i++){
        cin >> a[i];
    }    
    sort(all(a), greater<ll>());
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    for (int i = 0; i < m; i++){
        cin >> b[i];
        pq.push({0, i});
    }
    ll ans = 0;
    for (auto i: a){
        auto f = pq.top();
        pq.pop();
        ans += i * f.first;
        pq.push({f.first + b[f.second], f.second});
    }
    esac(ans);
    return 0;
}