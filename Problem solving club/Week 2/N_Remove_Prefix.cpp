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
        for (int i = 0; i < n; i++) cin >> a[i];

        set<int> st;
        int idx = n - 1;

        while (idx >= 0 && !st.count(a[idx])) {
            st.insert(a[idx]);
            idx--;
        }

        cout << idx + 1 << "\n";
    }

    return 0;
}
