#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool isVisited[1005];
int sum= 0;

void dfs(int src){
    sum+= src;
    isVisited[src]=true;
    for(int child: adj_list[src]){
        if(!isVisited[child]){
            dfs(child);
        }

    
    }

}


int main()
{
    int n, e;
    cin>> n>> e;
    while(e--){
        int a, b;
        cin>> a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(isVisited,false,sizeof(isVisited));
    int src;
    cin>>src;
    dfs(src);
    cout << sum ;

    return 0;
}