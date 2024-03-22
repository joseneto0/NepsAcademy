#include <bits/stdc++.h>

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main(){
    ios;
    int n, maior = 0;
    cin >> n;
    vector<pair<string, int>> a(n);
    for (int i = 0; i < n ; i++){
        cin >> a[i].first >> a[i].second;
    }
    int idx;
    for (int i =0; i < n; i++){
        if (a[i].second > maior){
            idx = i;
            maior = a[i].second;
        }
    }
    esac(a[idx].first);
    esac(a[idx].second);
    return 0;
}