#include<stdio.h>

int main(void)
{
    
    int a[100] = {0,}, m, n; // n : 바구니 개수, m : 공 넣는 횟수
    int i, j, k; // i번 부터 j번까지 k번 공을 넣는다.
    
    scanf("%d %d", &n, &m);
    
    for (int x = 0; x < m; x++)
    {
        
        scanf("%d %d %d", &i, &j, &k);
        for (int y = i-1; y <= j-1; y++)
        {
                a[y] = k;
        }
    }
    for (int x = 0; x < n; x++)
    {
        
        printf("%d ", a[x]);
    }
    
    return 0;
}