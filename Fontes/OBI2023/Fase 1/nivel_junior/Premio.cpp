#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int soma = a*1 + b*2 + c*3;
    char ans;
    if (soma >= 150){
        ans = 'B';
    } else if (soma >= 120){
        ans = 'D';
    } else if (soma >= 100){
        ans = 'P';
    } else {
        ans = 'N';
    }
    esac(ans);
    return 0;
}