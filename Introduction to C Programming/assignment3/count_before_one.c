#include <stdio.h>

int count_before_one(int a[], int n)
{
    int count_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            break;
        }
        else
        {
            count_index++;
        }
    }
    return count_index;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d", count_before_one(a, n));
    return 0;
}