#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        if (str.length() <= 10)
        {
            cout << str<<endl;
        }
        else if (str.length() > 10)
        {
            int length = str.length();
            cout << str[0] << length - 2 << str[length - 1] << endl;
        }
    }
    return 0;
}