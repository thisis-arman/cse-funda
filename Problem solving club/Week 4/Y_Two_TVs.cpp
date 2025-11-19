#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto &p : a)
    {
        while (!pq.empty() && pq.top() < p.first)
            pq.pop();
        pq.push(p.second);
        if ((int)pq.size() > 2)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
