#include <stdio.h>

// 2747 피보나치 수
int main(void)
{
    int n, result, a = 0, b = 1;
    scanf("%d", &n);
    
    for (int i = 1; i < n; i++)
    {
        result = a + b;
        a = b;
        b = result;
    }
    printf("%d", result);
    
    return 0;
}