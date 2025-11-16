#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> freq(n + 2, 0);

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        freq[l]++;
        freq[r + 1]--;
    }

    for (int i = 1; i <= n; i++)
        freq[i] += freq[i - 1];

    freq.resize(n + 1);

    freq.erase(freq.begin());

    sort(a.begin(), a.end(), greater<long long>());
    sort(freq.begin(), freq.end(), greater<long long>());

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i] * freq[i];
    }

    cout << ans << "\n";
    return 0;
}
