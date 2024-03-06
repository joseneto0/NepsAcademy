#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<char> st;
    for (char i: s){
        if (i == '(' || i == '{' || i == '['){
            st.push(i);
        } else {
            if (st.size() > 0 && st.top() == '{' && i == '}'){
                st.pop();
            } else if (st.size() > 0 && st.top() == '(' && i == ')'){
                st.pop();
            } else if (st.size() > 0 && st.top() == '[' && i == ']'){
                st.pop();
            } else {
                cout << 'N' << "\n";
                return;
            }
        }
    }
    if (st.size() > 0){
        cout << 'N' << "\n";
        return;
    }
    cout << 'S' << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}