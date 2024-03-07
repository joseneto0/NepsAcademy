#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

const int MAXN = 100005;

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<int> a(6);
    for (int i = 0; i < 6; i++){
        cin >> a[i];
    }
    sort(all(a));
    do {
        int soma1 = 0, soma2= 0 ;
        for (int i = 0; i < 6; i++){
            if (i < 3) soma1 += a[i];
            else soma2 += a[i];
        } 
        if (soma1 == soma2){
            esac('S');
            return 0;
        }
    } while (next_permutation(all(a)));
    esac('N');
    return 0;
}