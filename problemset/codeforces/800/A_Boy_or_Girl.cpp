#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    set<char> unique_char;
    for (int i = 0; i < str.length(); i++)
    {
        unique_char.insert(str[i]);
    }
    if (unique_char.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}