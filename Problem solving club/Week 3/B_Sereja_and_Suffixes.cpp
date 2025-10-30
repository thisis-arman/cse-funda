#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, m;
    cin >> t >> m;
    vector<int> v;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }

    while (m--)
    {
        map<int, int> mp;
        int q;
        cin >> q;
        for (int i = q-1; i < v.size(); i++)
        {
            mp[v[i]] = 0;
        }
        cout << mp.size() << endl;
    }

    return 0;
}