#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        
        long long ans = 0;
        for (int i = 0; i < n; i += 2) {
            long long diff = a[i+1] - a[i];
            ans = max(ans, diff);
        }
        cout << ans << '\n';
    }
    return 0;
}
