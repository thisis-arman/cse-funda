#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b = 0;
        int w = 0;
        string str;
        cin >> str;
        int first_idx = -1;
        int last_idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'B')
            {
                first_idx = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (str[i] == 'B')
            {
                last_idx = i;
                break;
            }
        }

        cout << (last_idx - first_idx) + 1 << endl;
    }

    return 0;
}