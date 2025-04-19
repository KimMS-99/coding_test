#include<stdio.h>

int main(void)
{

    long long int a, b, result;
    scanf("%lld %lld", &a, &b);

    result = a - b;
    if (result < 0)
    {
        result = -result;
    }
    
    printf("%lld", result);

    return 0;
}