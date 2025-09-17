#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    if (!(cin >> n))
        return 0;
    if (n % 2 == 0)
        cout << (n / 2) << '\n';
    else
        cout << (-(n + 1) / 2) << '\n';
    return 0;
}
