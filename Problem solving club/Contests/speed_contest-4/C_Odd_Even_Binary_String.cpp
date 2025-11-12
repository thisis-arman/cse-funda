#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int t = 0;
        for (int i = 0; i < N; ++i)
        {
            int b;
            cin >> b;
            t += b;
        }
        cout << ((t % 2 == N % 2) ? "YES\n" : "NO\n");
    }
}
