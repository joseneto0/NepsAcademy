#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, maior = 0, idx, num;
    cin >> n;
    vector<int> a(n), freq(13);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        freq[a[i]]++;
        if (freq[a[i]] > maior){
            maior = freq[a[i]];
        }
    }
    set<int> x;
    for (int i = 0; i < n; i++){
        if (freq[a[i]] == maior){
            x.insert(a[i]);
        }
    }
    for (int i: x){
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}