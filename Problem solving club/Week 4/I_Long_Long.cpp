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
        vector<long long> a(n);

        long long maxSum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxSum += llabs(a[i]);
        }

        int op = 0;
        bool inNeg = false;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                if (!inNeg)
                {
                    op++;
                    inNeg = true;
                }
            }
            else if (a[i] > 0)
            {
                inNeg = false;
            }
        }

        cout << maxSum << " " << op << "\n";
    }
    return 0;
}
