#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<ll> A(N);
        for (int i = 0; i < N; ++i) cin >> A[i];

        unordered_map<ll, int> pos;
        pos.reserve(N * 2);
        for (int i = 0; i < N; ++i) pos[A[i]] = i;

        vector<ll> s = A;
        sort(s.begin(), s.end());

        vector<ll> cnt_sorted(N, 0);
        for (int i = 1; i < N - 1; ++i) {
            long double mL = ((long double)s[i - 1] + s[i]) / 2.0L;
            long double mR = ((long double)s[i] + s[i + 1]) / 2.0L;
            ll cnt = (ll)floor(mR) - (ll)floor(mL);
            cnt_sorted[i] = max(0LL, cnt);
        }

        vector<ll> ans(N);
        for (int i = 0; i < N; ++i) {
            ll val = s[i];
            int idx = pos[val];
            ans[idx] = (i == 0 || i == N - 1) ? -1 : cnt_sorted[i];
        }

        for (int i = 0; i < N; ++i) {
            cout << ans[i] << (i + 1 < N ? ' ' : '\n');
        }
    }
    return 0;
}
