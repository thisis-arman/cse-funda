#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> mp;

    for (int i = 0; i < n - 1; i++) {
        string st = s.substr(i, 2);
        mp[st]++;
    }

    string ans = "";
    int maxCount = 0;
    for (auto [gram, cnt] : mp) {
        if (cnt > maxCount) {
            maxCount = cnt;
            ans = gram;
        }
    }

    cout << ans << "\n";
    return 0;
}
