#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }

    if (n % 2 == 0)
    {
        for (int i = n - 1; i >= 0; i = i - 2)
        {
            cout << v[i] << " ";
        }
        for (int i = 0; i <= n - 1; i += 2)
        {
            cout << v[i] << " ";
        }
    }else{
        for (int i = n - 1; i >= 0; i = i - 2)
        {
            cout << v[i] << " ";
        }
        for (int i = 1; i <= n - 1; i += 2)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}