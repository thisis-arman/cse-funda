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
        string b;
        cin >> b;

        string r = b;
        sort(r.begin(), r.end());
        r.erase(unique(r.begin(), r.end()), r.end());

        map<char, char> mp;
        int len = r.size();
        for (int i = 0; i < len; i++)
        {
            mp[r[i]] = r[len - 1 - i];
        }

        string dc = "";
        for (char c : b)
        {
            dc.push_back(mp[c]);
        }

        cout << dc << "\n";
    }

    return 0;
}
