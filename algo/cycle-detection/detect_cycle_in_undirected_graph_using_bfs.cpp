#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool vis[105];
int parent[105];
bool is_cycle;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : adj_list[par])
        {
            if ( vis[child] && parent[par] != child)
            {
                is_cycle = true;
            }
            if (!vis[child])
            {
                {
                    q.push(child);
                    vis[child] = true;
                    parent[child]=par;
                }
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis)); // set the default all are false
    memset(parent, -1, sizeof(parent));
    is_cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
        }
    }

    if (is_cycle)
    {
        cout << "Cycle Detected";
    }
    else
    {
        cout << "No Cycle Found";
    }

    return 0;
}