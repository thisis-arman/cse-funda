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
        int h, x, y;
        cin >> h >> x >> y;
        if (h == y)
        {
            cout << 1 << endl;
            break;
        }
        int count = 0;
        double val = h;
        if (h > y)
        {
            val = val - y;
            count = count + ceil(val / x);
            count++;
        }
        cout << count << endl;
    }

    return 0;
}