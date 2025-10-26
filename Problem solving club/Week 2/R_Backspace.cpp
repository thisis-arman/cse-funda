#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;
    vector<char> ch;
    for (auto c : str)
    {
        if (c == '<')
        {
            ch.pop_back();
        }
        else
        {
            ch.push_back(c);
        }
    }
    for (auto c : ch)
    {
        cout << c;
    }

    return 0;
}