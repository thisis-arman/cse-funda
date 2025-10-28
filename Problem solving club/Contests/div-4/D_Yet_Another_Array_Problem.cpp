#include <bits/stdc++.h>
using namespace std;
int calculateGCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return calculateGCD(b, a % b);
}

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
        map<int, int> mp;
        int found = -1;
        for (int j = 2; j <= 1000000000000000000; j++)
        {
            for (int i = 0; i < n; i++)
            {

                int k;
                cin >> k;
                mp[k] = 0;
                int gcd = calculateGCD(j, k);
                if (gcd == 1)
                {
                    found = j;
                    break;
                }
            }
            if (found != -1)
            {
                cout << found << endl;
                break;
            }
        }
    }

    return 0;
}