#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void kadane(vector<ll> &a, ll n){
    ll soma_total = max(a[0], 0LL);
    for (int i = 1; i < 2*n-1; i++){
        a[i] = max(a[i], a[i] + a[i-1]);
        soma_total = max(soma_total, a[i]);
    }
    cout << soma_total << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> a(200005);
    for (int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    for (int i = n; i < 2*n-1; i++){
        a[i] = a[i-n];
    }
    kadane(a, n);
    return 0;
}