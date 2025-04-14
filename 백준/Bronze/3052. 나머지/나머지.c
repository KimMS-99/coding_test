#include<stdio.h>

int main(void)
{
    
    int n[10], a[42], cnt = 0;
    
    for (int i = 0; i < 42; i++) {
        a[i] = -1;
    }
    
    for (int i = 0; i < 10; i++)
    {
        
        scanf("%d", &n[i]);
        a[n[i] % 42] = n[i] % 42;
    }
    
    for (int i = 0; i < 42; i++) {
        if (a[i] >= 0 && a[i] <= 1000) {
            cnt++;
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}