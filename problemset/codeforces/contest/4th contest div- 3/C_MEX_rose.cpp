#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        vector<int> freq(n+1,0);
        for (int x : a) {
            if (x <= n) freq[x]++;
        }
        
        int missing = 0;
        for (int i = 0; i < k; i++) {
            if (freq[i] == 0) missing++;
        }
        
        int cntk = (k <= n ? freq[k] : 0);
        
        int ans = max(cntk, missing);
        cout << ans << '\n';
    }
    return 0;
}
