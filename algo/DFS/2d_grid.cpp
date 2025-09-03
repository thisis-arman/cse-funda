#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];

void dfs(int si,int sj){

};

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int si,sj;
    cin>> si>> sj;
    dfs(si,sj);
    memset(vis,false,sizeof(vis));


    return 0;
}