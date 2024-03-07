#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";
#define read(a, n) for (int i = 0; i < n; i++) cin >> a[i];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<char> a(n);
    read(a, n);
    string soma = "";
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == '1'){
            int j = i;
            while (j < i+3){
                if (j == n){
                    break;
                }
                soma += a[j];
                j++;
            }
            if (soma == "100"){
                ans++;
            }
            soma = "";
        }
    }
    esac(ans);
    return 0;
}