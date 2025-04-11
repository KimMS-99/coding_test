#include<stdio.h>
int main(void)
{
    
    int n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = n-1; j > i; j--) {
            printf(" ");
        }
        for (int x = 0-i; x <= i; x++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j <= i; j++) {
            printf(" ");
        }
        for (int x = (n-1)*2-i-1; x > i; x--) { // 1 3 5 7 ~~
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}