#include <bits/stdc++.h>

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()

using namespace std;

int kadane(vector<int> &a, int n){
    int dp[50001];
    dp[0] = a[0];
    for (int i =1 ; i < n; i++){
        dp[i] = max(a[i], dp[i-1] + a[i]);
    }
    int ans = -INT_MAX;
    for (int i = 0; i < n; i++){
        ans = max(ans, dp[i]);
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    bool todos_negativos = true;
    for (int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    cout << kadane(a, n) << "\n";
    return 0;
}