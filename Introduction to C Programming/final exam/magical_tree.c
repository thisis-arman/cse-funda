#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int line = (n + 1) / 2 + 5;
    int space = line - 1;
    int star = 1;
    for (int i = 0; i < line; i++)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }
        space--;

        for(int i = 0;i<star;i++)
        {
            printf("*");
        }
        star+=2;
        printf("\n");
    }

    int space_gach = ((line*2)-1-n)/2;
    for(int i = 0;i<5;i++)
    {
        for(int i=0;i<space_gach;i++){
            printf(" ");
        }
        for(int i=0;i<n;i++){
            printf("*");
        }
        printf("\n");

        
    }

    return 0;
}