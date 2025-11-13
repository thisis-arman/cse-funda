#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    if (!(cin >> n))
        return;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int l = 1;
    int r = n;

    int mv = 1;
    int mxv = n;

    while (l < r)
    {
        int vl = a[l - 1];
        int vr = a[r - 1];

        if (vl == mv)
        {
            l++;
            mv++;
        }
        else if (vl == mxv)
        {
            l++;
            mxv--;
        }
        else if (vr == mv)
        {
            r--;
            mv++;
        }
        else if (vr == mxv)
        {
            r--;
            mxv--;
        }
        else
        {
            cout << l << " " << r << "\n";
            return;
        }
    }

    cout << -1 << "\n";
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        solve();
    }

    return 0;
}