#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        bool is_found = false;
        int length, sum;
        cin >> length >> sum;
        int numbers[length];
        for (int i = 0; i < length; i++)
        {
            cin >> numbers[i];
        };

        for (int i = 0; i < length; i++)
        {

            for (int j = i + 1; j < length; j++)
            {
                for (int k = j + 1; k < length; k++)
                {
                    if (numbers[i] + numbers[j] + numbers[k] == sum)
                    {
                        is_found = true;
                    }
                }
            }
        }

        if (is_found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}