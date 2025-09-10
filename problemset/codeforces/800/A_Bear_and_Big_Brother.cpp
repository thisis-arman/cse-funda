#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, b;
    cin >> l >> b;
    int years = 0;
    while (l <= b)
    {
        years++;
        l = l * 3;
        b = b * 2;
    }
    cout << years;

    return 0;
}