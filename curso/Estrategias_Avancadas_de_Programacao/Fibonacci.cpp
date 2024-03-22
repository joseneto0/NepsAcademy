#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n"

using namespace std;

int dp[35];

int fibo(int n){
    if (dp[n] != 0){
        return dp[n];
    }
    if (n == 1 || n == 2){
        return 1;
    }
    return dp[n] = fibo(n-1) + fibo(n-2);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    esac(fibo(n+1));
    return 0;
}
