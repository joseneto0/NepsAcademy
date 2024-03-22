#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
    ios;
    int x, y;
    cin >> x >> y;
    vector<ll> a(x), b(y);
    for (int i = 0; i < x; i++){
        cin >> a[i];
    }
    for (int i = 0; i < y; i++){
        cin >> b[i];
    }
    int j = 0;
    for (int i = 0; i < x; i++){
        if (j == y){
            break;
        }
        if (a[i] == b[j] && j < y){
            j++;
        }
    }
    if (j == y){
        esac('S');
    } else {
        esac('N');
    }
    return 0;
}