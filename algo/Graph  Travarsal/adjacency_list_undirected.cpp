#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int a[n];
    vector<int> ajd_list[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        ajd_list[a].push_back(b);
        ajd_list[b].push_back(a); // undirected
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << "->" << " ";
        for (int x : ajd_list[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}