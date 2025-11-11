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
        bool isHatrick = false;
        vector<string> v;
        for (int i = 0; i < 6; i++)
        {
            string b;
            cin >> b;
            v.push_back(b);
        }

        int count = 0;
        bool lastBall = false;
        for (int i = 0; i < 6; i++)
        {
            if (v[i] == "W")
            {
                // cout << v[i] << " " <<lastBall <<", ";
                if (!lastBall)
                {
                    count = 1;
                }
                else
                {
                    ++count;
                }
                lastBall = true;
            }
            else
            {
                lastBall = false;
            }
        }
        // cout << count;

        // cout << '\n';
        if (count >= 3)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}