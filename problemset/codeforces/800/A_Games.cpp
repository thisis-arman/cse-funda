#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    if (!(cin >> n)) return 0;
    vector<int> h(n), a(n);
    for (int i = 0; i < n; ++i) cin >> h[i] >> a[i];
    int ans = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j && h[i] == a[j]) ++ans;
    cout << ans << '\n';
    return 0;
}
