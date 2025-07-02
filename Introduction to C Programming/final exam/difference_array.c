#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int m;
        int a;
        int b;
        int c;
        scanf("%lld", &m);
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        long long int multi = a * b * c;
        if (m == 0)
        {
            printf("0\n");
            return 0;
        }

        if (m % multi == 0)
        {

            int division = m / multi;
            printf("%d\n", division);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}