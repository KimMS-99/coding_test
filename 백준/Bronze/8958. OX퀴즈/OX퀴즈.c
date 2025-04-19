#include<stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 81

int main(void)
{
    
    char o_x[ARRAY_SIZE];
    int test_case, continuous;

    scanf("%d", &test_case);

    int *sum_o_x = (int *)malloc(sizeof(int) * test_case);

    for (int i = 0; i < test_case; i++)
    {

        scanf("%s", o_x);
        sum_o_x[i] = 0;
        continuous = 1;

        for (int j = 0; o_x[j] != '\0'; j++)
        {

            if (o_x[j] == 'O')
                sum_o_x[i] += continuous++;

            else
                continuous = 1;
        }
    }

    for (int i = 0; i < test_case; i++)
    {
        printf("%d\n", sum_o_x[i]);
    }
    
 
    return 0;
}