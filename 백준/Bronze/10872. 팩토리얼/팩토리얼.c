#include<stdio.h>

int paektorieol(int a);

int main(void)
{
    
    int n;

    scanf("%d", &n);

    printf("%d\n", paektorieol(n));

    return 0;
}

int paektorieol(int n)
{

    int result = 1;
    
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    
    
    return result;
}