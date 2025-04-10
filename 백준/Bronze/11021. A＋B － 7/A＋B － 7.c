#include<stdio.h>
int main(void)
{
    
    int a, b;
    int tc;
    
    scanf("%d\n", &tc);
    
    for (int i = 1; i <= tc; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a + b);

    }
    
    return 0;
}