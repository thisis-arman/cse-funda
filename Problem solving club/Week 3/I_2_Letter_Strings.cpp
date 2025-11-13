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
        vector<string> words(n);
        for (int i = 0; i < n; i++)
            cin >> words[i];

        long long ans = 0;
        map<string, int> count;
        for (int i = 0; i < n; i++)
        {
            string s = words[i];
            char a = s[0], b = s[1];

            for (char c = 'a'; c <= 'k'; c++)
            {
                if (c == a)
                    continue;
                string temp = string(1, c) + b;
                ans += count[temp];
            }

            for (char c = 'a'; c <= 'k'; c++)
            {
                if (c == b)
                    continue;
                string temp = string(1, a) + c;
                ans += count[temp];
            }

            count[s]++;
        }

        cout << ans << '\n';
    }

    return 0;
}
