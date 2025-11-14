#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
            cin >> a[i];

        long long int ans = 1, ind = 0;
        set<long long int> s;
        s.insert(a[0]);

        for (long long int i = 1; i < n; i++)
        {
            if (s.find(a[i]) != s.end())
                s.erase(a[i]);

            if (s.empty())
            {
                ans++;
                for (long long int j = ind + 1; j <= i; j++)
                    s.insert(a[j]);
                ind = i;
            }
        }
        cout << ans << '\n';
    }
}
