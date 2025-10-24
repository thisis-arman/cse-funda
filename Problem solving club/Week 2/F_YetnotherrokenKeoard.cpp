#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        string res;
        vector<int> lower, upper; 
        for (char c : s) {
            if (c == 'b') {
                if (!lower.empty()) {
                    res[lower.back()] = '#'; 
                    lower.pop_back();
                }
            } 
            else if (c == 'B') {
                if (!upper.empty()) {
                    res[upper.back()] = '#';
                    upper.pop_back();
                }
            } 
            else {
                if (islower(c)) lower.push_back(res.size());
                else if (isupper(c)) upper.push_back(res.size());
                res.push_back(c);
            }
        }

        for (char c : res)
            if (c != '#')
                cout << c;
        cout << '\n';
    }
    return 0;
}
