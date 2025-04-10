#include<stdio.h>
int main(void)
{
    
    int X; // x : 영수증에 총 금액
    int N; // n : 영수증 물건 종류에 수
    int a, b; // a : 각 물건의 가격, b : 각 물건의 개수
    int total = 0;
    
    scanf("%d", &X);
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        
        scanf("%d %d", &a, &b);
        total += a * b;
    }
    
    if (X == total) {
        printf("Yes");
    }
    else
        printf("No");
        
    return 0;
}