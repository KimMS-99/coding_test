#include<stdio.h>

int main(void)
{
    int num1, num2;
    int mul, mul_1, mul_2, mul_3;
    
    scanf("%d %d", &num1, &num2);
    
    mul = num1 * num2;
    mul_1 = num1 * (num2 % 100 % 10);
    mul_2 = num1 * (num2 % 100 / 10);
    mul_3 = num1 * (num2 / 100);
    
    printf("%d\n", mul_1);
    printf("%d\n", mul_2);
    printf("%d\n", mul_3);
    printf("%d\n", mul);
    
    return 0;
}