#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int cap = 0;
    int small = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            cap++;
            // cout << char(str[i] + 32);
        }
        else
        {
            small++;
            // cout << str[i];
        }
    }
    if (small >= cap)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 65 && str[i] <= 90)
            {
                // cap++;
                cout << char(str[i] + 32);
            }
            else
            {
                // small++;
                cout << str[i];
            }
        }
    }
    else if (small < cap)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 65 && str[i] <= 90)
            {
                // cap++;
                cout << str[i];
            }
            else
            {
                cout << char(str[i] - 32);
                // small++;
            }
        }
    }
    return 0;
}