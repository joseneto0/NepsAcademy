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
    int s, t, x, y;
    cin >> s >> t;
    vector<vector<bool>> adj(s+1, vector<bool>(s+1, false));
    for (int i = 0; i < t;i++){
        cin >> x >> y;
        adj[x][y] = true;
        adj[y][x] = true;
    }
    int p, n, ans = 0;
    cin >> p;
    for (int i = 0; i < p; i++){
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        bool possivel = true;
        for (int i = 0; i < n-1 ; i++){
            if (a[i] != a[i+1]){
                if (!adj[a[i]][a[i+1]]){
                    possivel = false;
                    break;
                }
            }
        }
        if (possivel){
            ans++;
        }
    }
    esac(ans);
    return 0;
}