#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";

using namespace std;

bool isPrime(ll n){
    for (ll i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    if (n > 1 && isPrime(n)){
        esac('S');
    } else {
        esac('N');
    }
    return 0;
}