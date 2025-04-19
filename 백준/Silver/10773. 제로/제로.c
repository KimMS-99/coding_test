#include<stdio.h>

int main(void)
{
    
    int k, input, result = 0;
    scanf("%d", &k);

    int *n = (int *)malloc(sizeof(int) * k);

    for (int i = 0, j = 0; i < k; i++)
    {

        scanf("%d", &input);
        if(input != 0)
        {

            n[j++] = input;
            result += input;
        }
        else if (j != 0)
        {

            result -= n[--j];
            n[j] = -1;
        }
    }
    
    printf("%d\n", result);

    return 0;
}