#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n";
#define all(x) x.begin(), x.end()

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int x, y;
    cin >> x >> y;
    if (x > 8 || x < -8 || y < 0 || y > 8){
        esac('N');
    } else {
        esac('S');
    }
    return 0;
}