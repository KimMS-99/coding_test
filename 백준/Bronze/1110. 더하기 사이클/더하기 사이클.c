#include<stdio.h>

int main(void)
{
    
    int n = 1, b, sum2, sum1, count = 0;

    scanf("%d", &n);
    sum1 = n;

    while(1)
    {

        sum1 = ((sum1 % 10) * 10) + ((sum1 / 10 + sum1 % 10) % 10);
        count++;

        if (sum1 == n)
            break;
    }

    printf("%d\n", count);
    
    return 0;
}