#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        vector<pair<int, int>> pairs;
        pairs.reserve(n);
        for (int i = 0; i < n; ++i)
            pairs.emplace_back(a[i], i);

        sort(pairs.begin(), pairs.end());

        vector<int> b(n);
        for (int i = 0; i < n; ++i)
        {
            int idx = pairs[i].second;
            b[idx] = i + 1;
        }

        for (int i = 0; i < n; ++i)
        {
            if (i)
                cout << ' ';
            cout << b[i];
        }
        cout << '\n';
    }
    return 0;
}
