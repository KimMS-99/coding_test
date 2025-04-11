#include<stdio.h>
int main(void)
{
    
    int n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = n-1; j > i; j--) {
            printf(" ");
        }
        for (int x = 0; x <= i; x++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j <= i; j++) {
            printf(" ");
        }
        for (int x = n-1; x > i; x--) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}