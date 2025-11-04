#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    multiset<int> v;

    for (int i = 1; i <= t; i++)
    {
        int x;
        cin >> x;
        v.insert(x);
    }

    int count = 0;
    for (int i = 1; i <= t; i++)
    {
        // cout <<v.size();
        auto res = v.lower_bound(i);
        // cout <<i <<" -> "<< *res << endl;
        if (res != v.end())
        {
            count++;
            v.erase(res);
        }
    }
    cout << count << endl;

    return 0;
}