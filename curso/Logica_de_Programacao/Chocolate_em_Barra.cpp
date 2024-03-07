#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

int quad(int x, int y, int n){
    if (x > n/2 && y > n/2){
        return 1;
    }
    if (x <= n/2 && y <= n/2){
        return 3;
    }
    if (x <= n/2 && y > n/2){
        return 2;
    }
    return 4;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (quad(x1, y1, n) == quad(x2, y2, n)){
        cout << 'N' << "\n";
    } else {
        cout << 'S' << "\n";
    }
    return 0;
}