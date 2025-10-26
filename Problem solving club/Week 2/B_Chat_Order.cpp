#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    deque<string> deq;
    while (t--)
    {
        string s;
        cin >> s;
        deq.push_back(s);
    }

    map<string, int> mp;
    for (int i = deq.size() - 1; i >= 0; i--)
    {
        mp[deq[i]]++;
    }

    for (auto [s, x] : mp)
    {
        cout << s << "--" << x << endl;
    }

    return 0;
}