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
        int c1 = 0, big = 0;
        for (int i = 0; i < n; ++i)
        {
            int h;
            cin >> h;
            if (h == 1)
                ++c1;
            else
                ++big;
        }
        int ans = big + (c1 + 1) / 2;
        cout << ans << '\n';
    }
    return 0;
}
