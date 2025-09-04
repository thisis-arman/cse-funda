#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isValid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !vis[x][y]);
}

int dfs(int x, int y) {
    vis[x][y] = true;
    int rmcnt = 1; 
    for (int dir = 0; dir < 4; dir++) {
        int nx = x + d[dir].first;
        int ny = y + d[dir].second;
        if (isValid(nx, ny)) {
            rmcnt += dfs(nx, ny);
        }
    }
    return rmcnt;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    vector<int> apt;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                int rooms = dfs(i, j);
                apt.push_back(rooms);
            }
        }
    }

    if (apt.empty()) {
        cout << 0 << '\n';
    } else {
        sort(apt.begin(), apt.end());
        for (int i = 0; i < apt.size(); i++) {
            cout << apt[i] << (i + 1 == apt.size() ? '\n' : ' ');
        }
    }

    return 0;
}
