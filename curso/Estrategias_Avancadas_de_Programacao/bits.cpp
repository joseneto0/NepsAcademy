#include <bits/stdc++.h>

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()

using namespace std;

const ll MOD = 1000000007;

int dp[1010][1010];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    dp[1][0] = 1;
    dp[1][1] = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < min(i+1, k); j++){
            dp[i+1][0] += dp[i][j];
            dp[i+1][0] = dp[i+1][0] % MOD;
            dp[i+1][j+1] += dp[i][j];
            dp[i+1][j+1] = dp[i+1][j+1] % MOD;
        }
    }    
    int ans = 0;
    for (int i = 0; i < k; i++){
        ans = (ans+dp[n][i]) % MOD;
    }
    esac(ans);
    return 0;
}