#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool ok = false;
        int count = 0;

        for (char c : s) {
            if (!ok && c == '0') {
                ok = true;
            } else if (ok && c == '1') {
                count++;
            }
        }
        cout << count << '\n';
    }

    return 0;
}
