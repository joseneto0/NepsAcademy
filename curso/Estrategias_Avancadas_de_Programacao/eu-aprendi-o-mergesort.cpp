#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n"

using namespace std;


void merge(int l, int r, vector<int> &a){
    int m = (l + r) / 2;
    vector<int> s;
    int p1 = l;
    int p2 = m+1;
    while (p1 <= m && p2 <= r){
        if (a[p1] >= a[p2]){
            s.push_back(a[p1]);
            p1++;
        } else {
            s.push_back(a[p2]);
            p2++;
        }
    }
    while (p1 <= m){
        s.push_back(a[p1]);
        p1++;
    }
    while (p2 <= r){
        s.push_back(a[p2]);
        p2++;
    }
    for (int i = 0; i < (int)s.size(); i++){
        a[l+i] = s[i];
    }
}

void merge_sort(int l, int r, vector<int> &a){
    int m;
    if (l < r){
        m = (l + r) / 2;
        merge_sort(l, m, a);
        merge_sort(m+1, r, a);
        merge(l, r, a);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    merge_sort(0, n-1, a);
    for (int i: a){
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}
