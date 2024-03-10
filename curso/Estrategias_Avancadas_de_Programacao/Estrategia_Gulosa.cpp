#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, ans = 0;
    cin >> n;
    vector<int> moedas = {1, 5, 10, 25, 50, 100};
    for (int i = 5; i >= 0; i--){
        while (n >= moedas[i]){
            n -= moedas[i];
            ans++;
        }
    }
    esac(ans);
    return 0;
}
