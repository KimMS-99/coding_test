#include<stdio.h>

int main(void)
{
    
    int monty_hall, n, count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &monty_hall);
        if (monty_hall != 1)
            count++;
    }
    
    printf("%d\n", count);

    return 0;
}