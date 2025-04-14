#include<stdio.h>

int main(void)
{
    
    int a[100], m, n; // n : 바구니 개수, m : 공 바꾸는 횟수
    int x, y, temp; // x번째 바구니와 y번째 바구니 교환
    
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i++)
    {
        
        a[i] = i+1;
    }
    
    for (int i = 0; i < m; i++)
    {
        
        scanf("%d %d", &x, &y);
        x--; y--;
        temp = a[x];
        a[x] = a[y];
        a[y] = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ", a[i]);
    }
    
    
    return 0;
}