#include<stdio.h>

int main(void)
{
    
    int a, b, c, result;
    int n[10] = {0,};

    scanf("%d %d %d", &a, &b, &c);
    result = a * b * c;

    while (result > 0)
    {

        if (result < 10)
        {

            n[result % 10]++;
            result /= 10;
        }
        else
        {

            n[result % 10]++;
            result /= 10;
        }
    }

    for (int i = 0; i <= 9; i++) printf("%d\n", n[i]);

    return 0;
}