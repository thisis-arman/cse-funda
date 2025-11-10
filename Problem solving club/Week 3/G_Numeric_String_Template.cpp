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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;

            if ((int)s.size() != n)
            {
                cout << "NO\n";
                continue;
            }

            map<long long, char> nc;
            map<char, long long> cn;
            bool ok = true;

            for (int i = 0; i < n; i++)
            {
                long long num = a[i];
                char c = s[i];

                if (nc.count(num) && nc[num] != c)
                    ok = false;
                if (cn.count(c) && cn[c] != num)
                    ok = false;

                nc[num] = c;
                cn[c] = num;
            }

            cout << (ok ? "YES\n" : "NO\n");
        }
    }
}
