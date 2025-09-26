#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    bool isLucky = false;
    while (!isLucky && n!=0)
    {
        long long int l = n % 10;
        if (l == 7)
        {
            isLucky = true;
        }
        n = n / 10;
        // cout << n <<" here";
    }
    if (isLucky)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Not Lucky";
    }
    return 0;
}