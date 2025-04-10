#include<stdio.h>
int main(void)
{
    
    int a, b;
    int tc;
    
    scanf("%d", &tc);
    
    for (int i = 0; i < tc; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    
    return 0;
}