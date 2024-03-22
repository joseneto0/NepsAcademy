#include <bits/stdc++.h>

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main(){
    ios;
    int v;
    vector<int> a(3);
    cin >> v;
    for (int i =0 ; i < 3; i++){
        cin >> a[i];
    }
    sort(all(a));
    int ans = 0;
    for (int i = 0; i < 3 ;i++){
        v -= a[i];
        if (v >= 0){
            ans++;
        } else {
            break;
        }
    }
    esac(ans);
}