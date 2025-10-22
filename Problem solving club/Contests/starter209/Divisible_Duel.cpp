#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        int sum_of_odd = 0;
        int sum_of_even = 0;
        for (int j = x; j <= y; j++)
        {
            if (j % x == 0)
            {
                if (j % 2 == 0)
                {
                    sum_of_even += j;
                }
                else
                {
                    sum_of_odd += j;
                }
            }
        }

        // cout << sum_of_even << " ---" << sum_of_odd << endl;
        if (sum_of_even >= sum_of_odd)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}