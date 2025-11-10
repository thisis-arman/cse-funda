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
        vector<long long> s(n);
        for (int i = 0; i < n; ++i) cin >> s[i];

        priority_queue<long long> pq;
        long long t = 0;

        for (auto x : s) {
            if (x > 0) pq.push(x);
            else if (!pq.empty()) {
                t += pq.top();
                pq.pop();
            }
        }

        cout << t << "\n";
    }
    return 0;
}
