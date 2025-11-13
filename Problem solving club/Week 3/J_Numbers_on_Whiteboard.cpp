#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << 2 << '\n';
        int l = n;
        for (int i = n - 1; i >= 1; i--)
        {
            cout << l << " " << i << '\n';
            l = (l + i + 1) / 2;
        }
    }
    return 0;
}
