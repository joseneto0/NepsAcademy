#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x, ans = 0;
    char y;
    cin >> n;
    vector<vector<int>> a(32, vector<int>(2, 0));
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        if (y == 'D') a[x-30][0]++;
        else a[x-30][1]++;
    }
    for (int i = 0; i <= 30; i++){
        ans += min(a[i][0], a[i][1]);
    }
    esac(ans);
    return 0;
}