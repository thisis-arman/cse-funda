#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }

int is_row_print=0;
    for (int i = 0; i < n; i++)
    {
        if(is_row_print!=1){
          for (int j = 0; j < m; j++)
        {
            printf("%d ", a[n-1][j]);
        }
        printf("\n");
        }
        is_row_print=1;
        
       
      printf("%d ", a[i][m-1]);
        
        
    }
    return 0;
}