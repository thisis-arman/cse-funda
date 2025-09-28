#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> arr(n + 1);
    vector<int> count0(n + 1, 0), count1(n + 1, 0), count2(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        count0[i] = count0[i - 1] + (arr[i] == 0);
        count1[i] = count1[i - 1] + (arr[i] == 1);
        count2[i] = count2[i - 1] + (arr[i] == 2);
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int zeros = count0[r] - count0[l - 1];
        int ones = count1[r] - count1[l - 1];
        int twos = count2[r] - count2[l - 1];

        if (zeros == 0)
        {
            cout << 0 << "\n";
        }
        else if (ones == 0)
        {
            cout << 1 << "\n";
        }
        else if (twos == 0)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << 3 << "\n";
        }
    }

    return 0;
}
