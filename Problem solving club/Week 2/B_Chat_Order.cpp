#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> m(n);
    for (int i = 0; i < n; i++) cin >> m[i];

    unordered_set<string> s;
    vector<string> c;

    for (int i = n - 1; i >= 0; i--) {
        if (!s.count(m[i])) {
            s.insert(m[i]);
            c.push_back(m[i]); 
        }
    }

    for (auto &name : c)
        cout << name << "\n";

    return 0;
}
