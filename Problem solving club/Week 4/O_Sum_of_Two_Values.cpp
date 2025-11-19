#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    map<long long, int> mp;

    for (int i = 0; i < n; i++)
    {
        long long val;
        cin >> val;

        long long nd = x - val;

        if (mp.count(nd))
        {
            cout << mp[nd] + 1 << " " << i + 1 << "\n";
            return 0;
        }

        mp[val] = i;
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
