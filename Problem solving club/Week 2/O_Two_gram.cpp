#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> v;
    string str;
    cin >> str;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string st = str.substr(i, 2);
        mp[st]--;
        // cout << st << " ";
    }
    vector<pair<string, int>> final;
    for (auto [s, x] : mp)
    {
        final.push_back({s, x});
        cout << s <<" " << x <<" " << endl;
    }
    sort(final.begin(), final.end());
    cout << final.front().first;
    return 0;
}