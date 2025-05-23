#include<bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)
using namespace std;

void debug_vector(vector<ll>& a) {
    for (auto x : a) cout << x << " ";
    cout << "\n";
    return;
}

void solve() {
    ll n ; 
    cin >> n ; 
    while(n--) {
        uint64_t x, y ;
        cin >> x >> y; 
        uint64_t _mx = max(x,y);
        if(_mx == x) {
            if(_mx%2 == 0) { 
                cout << _mx*_mx  - y +  1 << "\n"; 
            }
            else {
                cout << (_mx-1)*(_mx-1) + 1 + y - 1 << "\n";
            }
        }
        else {
            if(_mx%2) {
                cout << _mx*_mx  - x +  1 << "\n";
            }
            else cout << (_mx-1)*(_mx-1) + 1 + x - 1 << "\n";
 
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}