#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    int t = x * y;

    if (t >= 100)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}