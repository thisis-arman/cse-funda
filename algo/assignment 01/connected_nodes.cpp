#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int a[n];
    vector<int> adj_list[n];
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        sort(adj_list[a].begin(), adj_list[a].end(), greater<int>());

        if (adj_list[a].size() < 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int x : adj_list[a])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}