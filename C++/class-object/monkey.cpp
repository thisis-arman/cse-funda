#include <bits/stdc++.h>
using namespace std;

int main()
{

    char str[100000];
    while (cin.getline(str, 1000000))
    {

        int length = strlen(str);
        // cout << str << endl;
        int sorted_value[length];
        for (int i = 0; i < length; i++)
        {
            if (str[i] >= 'a' || str[i] <= 'z')
            {
                sorted_value[i] = int(str[i]);
            }
        }
        sort(sorted_value, sorted_value + length);

        for (int i = 0; i < length; i++)
        {
            if(sorted_value[i] !=' '){
                cout << char(sorted_value[i]);
            }
        }
        cout <<endl;
    }
    return 0;
}