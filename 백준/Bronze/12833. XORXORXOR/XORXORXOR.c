#include<stdio.h>

int main()
{
    long long a, b, c;
    scanf("%d %d %d", &a, &b ,&c);
    if(c % 2 == 0)
        printf("%d\n", a ^ b ^ b);
    else
        printf("%d\n", a ^ b);

    return 0;
}