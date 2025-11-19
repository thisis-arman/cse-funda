#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    if (!(cin >> n >> q))
        return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<long long> diff(n + 2, 0);

    for (int i = 0; i < q; ++i)
    {
        int l, r;
        cin >> l >> r;
        diff[l] += 1;
        diff[r + 1] -= 1;
    }

    vector<long long> freq(n);
    long long cur = 0;
    for (int i = 1; i <= n; ++i)
    {
        cur += diff[i];
        freq[i - 1] = cur;
    }

    sort(a.begin(), a.end());
    sort(freq.begin(), freq.end());

    long long ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ans += a[i] * freq[i];
    }

    cout << ans << '\n';
    return 0;
}
