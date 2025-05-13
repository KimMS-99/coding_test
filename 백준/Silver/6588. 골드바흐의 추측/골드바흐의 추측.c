#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000001

int main(void)
{
    int n, *tf;
    tf = (int *)calloc(sizeof(int), SIZE);
    tf[1] = 1;
    for(int i = 2; i < SIZE; i++)
        if(tf[i] == 0)
            for(long long j = (long long)i * i; j < SIZE; j += i)
                tf[j] = 1;
    
    int s[99999], j = 0, input_count = 0;
    for(int i = 2; i < SIZE; i++)
        if(tf[i] == 0)
            s[j++] = i;
    
    while(input_count < 100000)
    {
        scanf("%d", &n);
        if (n == 0) break;
        else
        {
            int check = 1, i;
            for(i = 2; i < j; i++)
            {
                if(!tf[n - i] && !tf[i])
                {
                    check = 0;
                    break;
                }
            }
            if(check == 0)
                printf("%d = %d + %d\n", n, i, n - i);
            else
                printf("Goldbach's conjecture is wrong.\n");
        }
        input_count++;
    }

    free(tf);
    
    return 0;
}