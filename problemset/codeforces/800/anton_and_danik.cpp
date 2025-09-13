#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int a = 0;
    int d = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A')
        {
            // cout << str[i];
            a++;
        }
        else
        {
            d++;
        }
    }

    if (a > d)
    {
        cout << "Anton";
    }
    else if(d>a)
    {
        cout << "Danik";
    }else{
        cout <<"Friendship";
    }
    return 0;
}