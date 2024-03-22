#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i =0; i < n; i++){
        cin >> a[i].first >> a[i].second;
        swap(a[i].first, a[i].second);
    }
    sort(all(a));
    int atual = 0, ans = 0;
    for (auto i: a){
        if (i.second >= atual){
            ans++;
            atual = i.first;
        }
    }
    esac(ans);
    return 0;
}
