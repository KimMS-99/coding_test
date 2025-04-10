#include<stdio.h>
int main(void)
{
    
    int n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) { // 반복횟수
        for (int j = n-i; j < n; j++) { // 빈공간 0 1 2 3 4
            printf(" ");
        }
        for (int x = (n-i)*2-1; x > 0; x--) { // 별찍기 9 7 5 3 1 홀수 번 출력 x ->
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}