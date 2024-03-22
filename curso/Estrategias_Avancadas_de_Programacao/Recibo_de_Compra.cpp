#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

using namespace std;

int dp[105][25][105];
int r, k;

int solve(int v, int q, int m){
    if (dp[v][q][m] != -1){
        return dp[v][q][m];
    }

    if (v == 0){
        if (q == 0){
            return dp[v][q][m] = 1;
        } else {
            return dp[v][q][m] = 0;
        }
    } else {
        if (q == 0){
            return dp[v][q][m] = 0;
        }
    }

    dp[v][q][m] = 0;
    for (int i = 1; i < min(v+1, m); i++){
        dp[v][q][m] += solve(v-i, q-1, i);
    }

    return dp[v][q][m];
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> r >> k;
    memset(dp, -1, sizeof(dp));
    esac(solve(r, k, r+1));
    return 0;
}
