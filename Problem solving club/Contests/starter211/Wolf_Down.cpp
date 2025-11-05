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

        bool ws = false;
        int sb = 0;
        
        for (char c : s) {
            if (c == '1') {
                ws = true;
            } else if (c == '0') {
                if (!ws) {
                    sb++;
                }
            }
        }

        cout << sb << endl;
    }

    return 0;
}
