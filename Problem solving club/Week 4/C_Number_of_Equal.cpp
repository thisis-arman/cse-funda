#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> vn;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vn.push_back(x);
    }
    vector<int> vm;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        vm.push_back(x);
    }
    // cout << "ok ->" << max(vn.size(), vm.size());

    for (int i = 0; i < max(vn.size(), vm.size()); i++)
    {
        if (vn[i] == vm[i])
        {
            cout << vn[i] << vm[i];
            break;
        }
    }

    return 0;
}