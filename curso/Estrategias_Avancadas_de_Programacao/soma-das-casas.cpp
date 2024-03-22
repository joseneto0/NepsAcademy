#include <bits/stdc++.h>

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()

using namespace std;
int n, k;
vector<int> a;

bool busca_bin(int v){
    int l = 0, r = n-1;
    int mid;
    while (r >= l){
        mid = (l + r) / 2;
        if (a[mid] == v){
            return true;
        } else if (a[mid] < v){
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    a.assign(n, 0);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++){
        if (busca_bin(k - a[i])){
            cout << a[i] << " " << k - a[i] << "\n";
            break;
        }
    }
    return 0;
}