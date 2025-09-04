#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
int dis[105][105];
vector<pair<int, int>> d = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

int n, m;

bool is_valid(int r, int c)
{
    // 1. if row/ column is less than zero and more than or equals to the num of columns and row
    if (r < 0 || r >= n || c < 0 || c >= m)
    {
        return false;
    }
    return true;
}
void bfs(int sr, int sc)
{
    queue<pair<int, int>> q;
    q.push({sr, sc});
    vis[sr][sc] = true;
    dis[sr][sc] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_r = par.first;
        int par_c = par.second;

        for (int i = 0; i < 4; i++)
        {
            int cr = par_r + d[i].first;
            int cc = par_c + d[i].second;
            if (is_valid(cr, cc) && !vis[cr][cc])
            {
                q.push({cr, cc});
                vis[cr][cc] = true;
                dis[cr][cc] = dis[par_r][par_c] + 1;
            }
        }
    }
}

int main()
{
    cin >> n>> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    int sr, sc,dr,dc;
    cin >> sr >> sc>>dr>>dc;
    bfs(sr, sc);
    cout << dis[dr][dc];
    return 0;
}