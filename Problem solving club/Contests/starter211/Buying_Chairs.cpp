#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int w, p, k;
        cin >> w >> p >> k;
        int wc = min(w, k);
        int pc = k - wc;

        int s = wc * 2 + pc * 1;

        cout << s << endl;
    }

    return 0;
}
