#include<stdio.h>

int main(void)
{

    int a, b, result;
    
    scanf("%d %d", &a, &b);
    
    a = (a / 100) + (a % 100 / 10) * 10 + a % 10 * 100;
    b = (b / 100) + (b % 100 / 10) * 10 + b % 10 * 100;

    if (a > b) {
        result = a;
    }
    else{
        result = b;
    }
    printf("%d\n", result);
    
    return 0;
}