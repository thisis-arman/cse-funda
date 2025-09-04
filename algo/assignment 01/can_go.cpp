#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#' && !vis[x][y]);
}

void dfs(int x, int y)
{
    vis[x][y] = true;
    for (int dir = 0; dir < 4; dir++)
    {
        int nx = x + d[dir].first;
        int ny = y + d[dir].second;
        if (isValid(nx, ny))
        {
            dfs(nx, ny);
        }
    }
}

int main()
{
    cin >> n >> m;
    pair<int, int> A, B;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') A = {i, j};
            if (grid[i][j] == 'B') B = {i, j};
        }
    }

    memset(vis, false, sizeof(vis));

    dfs(A.first, A.second);

    if (vis[B.first][B.second]) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
