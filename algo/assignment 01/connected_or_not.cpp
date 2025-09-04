#include <bits/stdc++.h>
using namespace std;
int adj_mat[1005][1005];

bool isConnected(int x, int y)
{
  
    return adj_mat[x][y] == 1 || x==y;
}

int main()
{
    int n, e;
    cin >> n >> e;
    memset(adj_mat, 0, sizeof(adj_mat));

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        // cout << a<<" " <<b <<endl;
        adj_mat[a][b] = 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (isConnected(x, y))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}