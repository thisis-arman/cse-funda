#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e, q;
    cin >> n >> e >> q;

    const long long INF = LLONG_MAX;
    vector<vector<long long>> adj_mat(n + 5, vector<long long>(n + 5, INF));

    for (int i = 1; i <= n; i++) adj_mat[i][i] = 0;

    while (e--) {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        adj_mat[a][b] = min(adj_mat[a][b], c);
        adj_mat[b][a] = min(adj_mat[b][a], c); // undirected
    }

    // Floyd–Warshall
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (adj_mat[i][k] != INF && adj_mat[k][j] != INF
                    && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j]) {
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }

    while (q--) {
        int s, d;
        cin >> s >> d;
        if (adj_mat[s][d] == INF) cout << -1 << "\n";
        else cout << adj_mat[s][d] << "\n";
    }

    return 0;
}
