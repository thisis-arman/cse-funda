#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int cnt_zero = 0, cnt_neg = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) cnt_zero++;
            else if (a[i] == -1) cnt_neg++;
        }
        
        int ops = cnt_zero;
        if (cnt_neg % 2 == 1) {
            ops += 2;
        }
        cout << ops << "\n";
    }
    return 0;
}