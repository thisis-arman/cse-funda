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
        int n;
        cin >> n;
        int cnt_happy = 0;
        vector<int> alice;
        vector<int> bob;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            // cout << m << ' ';
            alice.push_back(m);
        }
        // cout << '\n';
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            // cout << m << ' ';
            bob.push_back(m);
        }
        // cout << '\n';
        // for (int i = 0; i < n; i++)
        // {
        //     cout << "hi" << endl;
        //     cout << alice[i] << bob[i] << endl;
        // }
        for (int i = 0; i < n; i++)
        {
            if (alice[i] < bob[i] && (alice[i] * 2) < bob[i])
            {
                continue;
            }
            else if (bob[i] < alice[i] && (bob[i] * 2) < alice[i])
            {
                continue;
            }
            else
            {
                cnt_happy++;
            }
        }
        cout << cnt_happy << endl;
    }

    return 0;
}