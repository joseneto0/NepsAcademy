#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, r, p;
    cin >> n >> r >> p;
    int ans = 0, soma = n;
    while (n < p){
        soma *= r;
        n += soma;
        ans++;
    }
    esac(ans);
    return 0;
}