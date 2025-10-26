#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string, int> cnt;

    string name;
    for (int i = 0; i < t; i++)
    {
        cin >> name;
        if (cnt[name] == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << name << cnt[name] << endl;
        }
        cnt[name]++;
        // cout << "what "<<  cnt[name]++<<endl;
    }

    return 0;
}