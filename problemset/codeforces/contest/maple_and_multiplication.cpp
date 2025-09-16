#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        // int m = 1;
        int count = 0;
        if (a == b)
        {
            count = 0;
        }
        else
        {
            if (a < b)
            {
                a = a * b;
                if (a == b)
                {
                    count++;
                }
            }
            else if (a > b)
            {
                b = a * b;
                if (a == b)
                {
                    count++;
                }
            }else {
                while(a!=b){
                    a=a*b;
                    count++;
                    b=b*a;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}