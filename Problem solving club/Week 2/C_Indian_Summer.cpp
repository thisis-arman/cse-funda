#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<pair<string, string>, int> mp;
    while (n--)
    {
        string k, v;
        cin >> k >> v;
        mp[{k, v}] = 1;
    }

    cout << mp.size();
    return 0;
}