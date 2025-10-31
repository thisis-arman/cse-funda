#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<string> read;

    while (n--) {
        string s;
        cin >> s;
        if (read.count(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
            read.insert(s);
        }
    }

    return 0;
}
