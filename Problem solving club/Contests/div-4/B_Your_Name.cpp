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
        string s, ss;
        cin >> s >> ss;
        bool isMatched = true;
        // for (int i = 0; i < n; i++)
        // {
        //     auto it = ss.find(s[i]);
        //     if (it != string::npos)
        //     {
        //         s.erase(s[i]);
        //         ss.erase(it);
        //     }
        //     else
        //     {
        //         isMatched = false;
        //         break;
        //     }
        // }
        sort(s.begin(),s.end());
        sort(ss.begin(),ss.end());
        if (s==ss)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}