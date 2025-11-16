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
        deque<char> v;
        string str;
        cin >> str;
        for (auto s : str)
        {
            v.push_back(s);
        }
        for (int i = 0; i < n / 2; i++)
        {
            int first = v.front();
            int last = v.back();
            if (first != last)
            {
                v.pop_back();
                v.pop_front();
            }
        }

        cout << v.size() << "\n";
    }

    return 0;
}