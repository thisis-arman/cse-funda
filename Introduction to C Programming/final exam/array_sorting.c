#include <stdio.h>

int main()
{
    int l;
    scanf("%d", &l);
    int base_array[l];
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &base_array[i]);
    }

    int asc_array[l];
    for (int i = 0; i < l; i++)
    {
        int a = base_array[i];
        int b = base_array[i + 1];
        if (a < b)
        {
            asc_array[i] = a;
            a++;
            b++;
        }
    }

    for (int i = 0; i < l; i++)
    {
        printf("%d ", asc_array[i]);
    }
    return 0;
}