#include<stdio.h>
#include <stdlib.h>

void sort_and_print(int *n, int size);

int main(void)
{
    
    int array_size;

    scanf("%d", &array_size);

    int *n = (int *)malloc(sizeof(int) * array_size);

    for (int i = 0; i < array_size; i++) scanf("%d", &n[i]);
    
    sort_and_print(n, array_size);

    return 0;
}

void sort_and_print(int *n, int size)
{

    int temp;
    for (int j = 1; j < size; j++)
        for (int i = 0; i < size - j; i++)
            if (n[i] > n[i + 1])
            {

                temp = n[i];
                n[i] = n[i + 1];
                n[i + 1] = temp;
            }
    
    for (int i = 0; i < size; i++) printf("%d\n", n[i]);
    
}