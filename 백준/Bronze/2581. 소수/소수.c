#include<stdio.h>

int main(void)
{
    
    int n, m;

    scanf("%d %d", &n, &m);

    int decimal_min = m + 1, decimal_sum = 0, check = 0;

    if (n == 1)
        decimal_sum--;
    
    for (int i = n; i <= m; i++)
    {
        check = 1;
        for (int j = 2; j <= i; j++)
        {

            if (i % j == 0 && j != i)
            {

                check = 0;
                break;
            }
        }
        if (check == 1 && m != 1)
        {

            if (decimal_min > i && i != 1)
                decimal_min = i;
            
            decimal_sum += i;
        }
    }

    if (decimal_min == m + 1)
        printf("%d\n", -1);
    
    else 
        printf("%d\n%d\n", decimal_sum, decimal_min);
    
    return 0;
}