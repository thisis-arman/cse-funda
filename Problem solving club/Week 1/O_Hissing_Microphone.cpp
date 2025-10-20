#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.length();
    bool isHiss = false;
    for (int i = 0; i < len - 1; i++)
    {
        if (str[i] == 's' && str[i + 1] == 's')
        {
            isHiss = true;
            break;
        }
    }

    cout <<( isHiss ? "hiss" : "no hiss");
    return 0;
}