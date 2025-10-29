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
        string s;
        cin >> s;
        bool isStrong = false;
        string ans;

        for (int i = 0; i < s.size(); i++)
        {
            ans.push_back(s[i]); 

            if (i + 1 < s.size() && s[i] == s[i + 1] && !isStrong)
            {
                char ich = (s[i] != 'z' ? s[i] + 1 : s[i] - 1);
                ans.push_back(ich);
                isStrong = true;
            }
        }

        if (!isStrong)
        {
            char ich;
            if (s.back() != 'z')
                ich = s.back() + 1;
            else
                ich = s.back() - 1;

            ans.push_back(ich);
        }

        cout << ans << "\n";
    }
    return 0;
}
