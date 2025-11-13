#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n))
        return 0;
    vector<long long> tops;
    for (int i = 0; i < n; ++i)
    {
        long long k;
        cin >> k;
        auto it = upper_bound(tops.begin(), tops.end(), k); // first element > k
        if (it == tops.end())
        {
            tops.push_back(k);
        }
        else
        {
            *it = k;
        }
    }
    cout << (int)tops.size() << '\n';
    return 0;
}
