#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<string> seen;

    while (n--) {
        string s;
        cin >> s;
        if (seen.count(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
            seen.insert(s);
        }
    }

    return 0;
}
