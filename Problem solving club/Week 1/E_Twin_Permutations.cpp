#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Store value and index
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) v.push_back({a[i], i});

        // Sort by value of a
        sort(v.begin(), v.end());

        // b should be permutation of 1..n (sorted order)
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            // Assign increasing values of b to increasing a
            b[v[i].second] = i + 1;
        }

        for (int i = 0; i < n; i++) cout << b[i] << " ";
        cout << "\n";
    }
    return 0;
}
