#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    if (n != m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int temp;
                scanf("%d", &temp);
            }
        }
        printf("NO\n");
        return 0;
    }
    
    int matrix[100][100]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (matrix[i][j] != 1) {
                    printf("NO\n");
                    return 0;
                }
            }
            else if (i + j == n - 1) {
                if (matrix[i][j] != 1) {
                    printf("NO\n");
                    return 0;
                }
            }
            else {
             
                if (matrix[i][j] != 0) {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }
    
    printf("YES\n");
    return 0;
}