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
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b < c || a < b && b < c){
        esac(1);
    } else if (b < c && a + b >= c || b >= c && a < b){
        esac(2);
    } else {
        esac(3);
    }
    return 0;
}