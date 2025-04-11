#include<stdio.h>
int main(void)
{
    
    int n[10], max = 0, max_co = 0;
    
    for (int i = 0; i < 9; i++) {
        scanf("%d", &n[i]);
        if (n[i] > max) {
            max = n[i];
            max_co = i+1;
        }
    }
    printf("%d\n%d", max, max_co);
    
    return 0;
}