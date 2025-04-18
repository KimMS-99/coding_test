#include<stdio.h>

int fibonacci(int a);

int main(void)
{
    
    int n;

    scanf("%d", &n);

    printf("%d\n", fibonacci(n));

    return 0;
}

int fibonacci(int n)
{

    if (n >= 2)
        return fibonacci(n-1) + fibonacci(n-2);
    else if (n == 1)
        return 1;
    else
        return n;
    
}