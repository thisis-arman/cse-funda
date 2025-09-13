#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        long long int x, y;
        cin >> n >> m >> x >> y;
        for (int i = 0; i < n; i++)
        {
            long long int ai;
            cin >> ai;
        }
        for (int k = 0; k < m; k++)
        {
            long long int bk;
            cin >> bk;
        }
        cout << (long long)n + m << endl;
    }
    return 0;
}