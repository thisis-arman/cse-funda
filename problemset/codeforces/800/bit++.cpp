#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int X = 0;
    while (n--)
    {
        string str;
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {
            // cout << (str[i] == '+' && str[i + 1] == '+') << endl;
            if (str[i] == '+' && str[i + 1] == '+')
            {
                X++;
            }
            else if(str[i] == '-' && str[i + 1] == '-')
            {
                X--;
            }
        }
    }
    cout << X;
    
    // cout << X;
    return 0;
}