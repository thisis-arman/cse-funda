#include <bits/stdc++.h>
using namespace std;
// if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        bool valid = true;
        string t = "CODETOWN";
        vector<pair<char, int>> res;
        for (int i = 0; i < 8; i++)
        {
            bool isVowel = false;
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                isVowel = true;
            }
            if (str[i] != t[i])
            {
                res.push_back({'#', isVowel});
            }
            else
            {
                res.push_back({'*', isVowel});
            }
        }

        for (int i = 0; i < 8; i++)
        {
            bool v = false;
            if (t[i] == 'A' || t[i] == 'E' || t[i] == 'I' || t[i] == 'O' || t[i] == 'U')
            {
                v = true;
            }
            if (res[i].first == '#')
            {
                // cout << res[i].first << " " << res[i].second << " -> " << v << endl;
                if (res[i].second != v)
                {

                    valid = false;
                }
            }
        }
        if (valid)
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