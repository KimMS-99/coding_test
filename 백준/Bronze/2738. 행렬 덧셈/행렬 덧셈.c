#include<stdio.h>

int main(void)
{
    
    int a[2][100][100], sum[100][100];
    int n, m, count = 0;
    
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum[i][j] = a[0][i][j] + a[1][i][j];
            printf("%d ", sum[i][j]);
         }
        printf("\n");
    }

    
    return 0;
}