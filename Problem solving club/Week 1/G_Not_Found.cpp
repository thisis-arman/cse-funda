#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    bool isFound = false;

    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[i + 1] - str[i] > 1)
        {
            cout << char(str[i] + 1) << " ";
            isFound = true;
            break;
        }
    }

    if (!isFound)
    {
        cout << "None";
    }

    return 0;
}