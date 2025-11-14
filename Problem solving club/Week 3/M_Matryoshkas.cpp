#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        map<int, int> freq;
        for (int x : a) freq[x]++;

        int ans = 0;
        int prev = -1, p_cnt = 0;

        for (auto [x, cnt] : freq) {
            if (x != prev + 1) {
                ans += p_cnt;
            } else {
                ans += max(0, p_cnt - cnt);
            }
            prev = x;
            p_cnt = cnt;
        }
        ans += p_cnt; 
        cout << ans << "\n";
    }
}
