#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

const int MAXN = 100005;

using namespace std;

int n;
vector<pair<int, int>> events;

int line_sweep(){
    sort(all(events));
    int ativos = 0, max_ativos = 0;
    for (int i = 0; i < 2 * n; i++){
        if (i > 0 && events[i].first != events[i-1].first){
            max_ativos = max(max_ativos, ativos);
        }
        if (events[i].second == 0){
            ativos++;
        } else {
            ativos--;
        }
    }
    max_ativos = max(max_ativos, ativos);
    return max_ativos;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int x, y;
    cin >> n;
    events.resize(2*n);
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        events[2*i] = {x, 0};
        events[2*i+1] = {y, 1};
    }
    int ans = 20 * line_sweep();
    esac(ans);
    return 0;
}