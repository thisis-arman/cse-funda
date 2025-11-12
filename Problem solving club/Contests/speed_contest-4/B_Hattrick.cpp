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
        vector<string> v(6);
        for (int i = 0; i < 6; i++)
        {
            cin >> v[i];
        }

        int count = 0, mx = 0;
        for (int i = 0; i < 6; i++)
        {
            if (v[i] == "W")
            {
                count++;
                mx = max(mx, count);
            }
            else
            {
                count = 0;
            }
        }

        if (mx >= 3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
