#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int sum_of_str1 = 0;
    int sum_of_str2 = 0;
    for (int i = 0; i < str1.length(); i++)
    {
        cout << int(str1[i]) << " ";
        if (int(str1[i]) >= 65 && int(str1[i]) <= 90)
        {
            sum_of_str1 = sum_of_str1 + int(str1[i]) + 32;
        }
        else
        {
            sum_of_str1 += int(str1[i]);
        }
    }
    for (int i = 0; i < str2.length(); i++)
    {
        cout << int(str2[i]) << " ";
        if (int(str2[i]) >= 65 && int(str2[i]) <= 90)
        {
            sum_of_str2 = sum_of_str2 + int(str2[i]) + 32;
        }
        else
        {
            sum_of_str2 += int(str2[i]);
        }
    }

    cout << sum_of_str1 << " " << sum_of_str2 << endl;
    if (sum_of_str1 < sum_of_str2)
    {
        cout << -1;
    }
    else if (sum_of_str1 > sum_of_str2)
    {
        cout << 1;
    }
    else if (sum_of_str1 == sum_of_str2)
    {
        cout << 0;
    }

    return 0;
}