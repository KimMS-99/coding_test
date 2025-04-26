#include <stdio.h>

// 2775 부녀회장이 될테야
int main(void)
{
    int T, k, n; // T : testcase, k >= 1 : 층, n <= 14: 호
    int a[15][14] = {0, };
    scanf("%d", &T);

    for (int i = 0; i < 15; i++)
    {
        if (i < 14)
            a[0][i] = i + 1;
        a[i][0] = 1;
    }
    for (int i = 1; i < 15; i++)
        for (int j = 1; j < 14; j++)
            a[i][j] = a[i - 1][j] + a[i][j - 1];
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &k, &n);
        printf("%d\n", a[k][n - 1]);
    }
    
    return 0;
}