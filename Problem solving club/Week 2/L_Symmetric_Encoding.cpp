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
        string str;
        cin >> str;
        map<char, char> mp;
        for (int i = 0; i < n; i++)
        {
            mp[str[i]] = str[(n - 1) - i];
        }

        for(auto [x,y]:mp){
            cout << x <<" "<<y <<endl;
        }
    }

    return 0;
}