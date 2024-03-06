#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()

using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, d;
    while (cin >> n >> d){
        if (!n && !d){
            break;
        }
        string num, ans;
        cin >> num;
        int cont = 0;
        for(char i: num){
            while (ans.size() > 0 && i > ans.back() && cont < d){
                ans.pop_back();
                cont++;
            } 
            if (ans.size() < n-d) ans.push_back(i);
        }
        cout << ans << "\n";
    }
    return 0;
}