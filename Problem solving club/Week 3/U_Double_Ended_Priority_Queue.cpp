#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    multiset<int> ms;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }

    while (q--) {
        int y;
        cin >> y;

        if (y == 0) {
            int add;
            cin >> add;
            ms.insert(add);
        } 
        else if (y == 1) {
            cout << *ms.begin() << endl;
            ms.erase(ms.begin());
        } 
        else if (y == 2) {
            auto it = prev(ms.end());
            cout << *it << endl;
            ms.erase(it);
        }
    }

    return 0;
}
