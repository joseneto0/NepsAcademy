#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()

using namespace std;

int parent[100005], sz[100005];

int find(int v){
    if (parent[v] == v){
        return v;
    }
    return parent[v] = find(parent[v]);
}

void unionn(int a, int b){
    a = find(a);
    b = find(b);
    if (a == b) {
        return;
    }
    if (sz[a] >= sz[b]){
        parent[b] = a;
        sz[a] += sz[b];
    } else {
        parent[a] = b;
        sz[b] += sz[a];
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        sz[i] = 1;
        parent[i] = i;
    }
    char c;
    int x, y;
    for (int i = 0; i < k; i++){
        cin >> c >> x >> y;
        if (c == 'C'){
            if (find(x) == find(y)){
                cout << 'S' << "\n";
            } else {
                cout << 'N' << "\n";
            }
        } else {
            unionn(x, y);
        }
    }
    return 0;
}