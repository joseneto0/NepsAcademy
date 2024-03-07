#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int
#define esac(x) cout << x << "\n";

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int h, p, f, d;
    cin >> h >> p >> f >> d;
    vector<int> a(16, 0);
    a[h] = 1;
    a[p] = 2;
    if (d == -1){
        while (true){
            if (f < 0){
                f = 15;
            }
            if (a[f] == 1){
                esac('S');
                break;
            } else if (a[f] == 2){
                esac('N');
                break;
            }
            f--;
        }
    } else {
        while (true){
            if (f > 15){
                f = 0;
            }
            if (a[f] == 1){
                esac('S');
                break;
            } else if (a[f] == 2){
                esac('N');
                break;
            }
            f++;
        }
    }
    return 0;
}