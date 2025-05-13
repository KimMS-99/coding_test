#include <stdio.h>
#include <stdlib.h>

#define SIZE 246913

int main(void)
{
    int n, *tf;
    tf = (int *)calloc(sizeof(int), SIZE);
    for(int i = 2; i < SIZE; i++)
        if(tf[i] == 0)
            for(long long j = (long long)i * i; j < SIZE; j += i)
                tf[j] = 1;

    while(1)
    {
        scanf("%d", &n);
        if(n != 0)
        {
            int count = 0;
            for(int i = n + 1; i <= n * 2; i++)
                if(tf[i] == 0)
                    count++;

            printf("%d\n", count);
        }
        else
            break;
    }

    free(tf);
    
    return 0;
}