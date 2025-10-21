#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t;
    cin >> s >> t;
    int count = 0;
    for (long long int i = 0; i <= s; i++)
    {
        for (long long int j = 0; j <= s; j++)
        {
            for (long long int k = 0; k <= s; k++)
            {
                if (i + j + k <= s && i * j * k <= t)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}