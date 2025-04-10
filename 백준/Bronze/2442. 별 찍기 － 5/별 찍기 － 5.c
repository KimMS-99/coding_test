#include<stdio.h>
int main(void)
{
    
    int n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) { // 반복횟수
        for (int j = n-1; j > i; j--) { // 빈공간
            printf(" ");
        }
        for (int x = 0-i; x <= i; x++) { // 별찍기 1 3 5 7 9 홀수 번 출력
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}