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
    int n;
    cin >> n;
    string s;
    cin >> s;
    char ant = s[0];
    map<char, int> freq;
    for (int i = 0; i < n; i++){
        if (ant != s[i]){
            cout << freq[ant] << " " << ant << " ";
            freq[ant] = 0;
        }
        freq[s[i]]++;
        ant = s[i];
    }
    if (freq[ant] != 0){
        cout << freq[ant] << " " << ant << "\n";
    }
    return 0;
}