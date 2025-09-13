#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, re_str;
    cin >> str >> re_str;
    bool is_valid = false;
    int l = str.length() - 1;
    if (str.length() == re_str.length())
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == re_str[l - i])
            {
                is_valid = true;
            }
            else
            {
                is_valid = false;
            }
        }
    }
    else
    {
        is_valid = false;
    }

    if (is_valid)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}