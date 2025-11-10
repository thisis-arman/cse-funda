#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    multiset<int> tc;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        tc.insert(h);
    }

    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        auto it = tc.upper_bound(t);
        if (it == tc.begin()) {
            cout << -1 << "\n"; 
        } else {
            --it; 
            cout << *it << "\n";
            tc.erase(it); 
        }
    }

    return 0;
}
