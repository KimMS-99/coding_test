#include<stdio.h>

#define ARRAY_SIZE 10001

int main(void)
{
    
    int n[ARRAY_SIZE] = {0,}, self_num;

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        
        if (i < 10)
            n[i + i]++;
            
        else if (i < 100)
            n[i + (i / 10) + (i % 10)]++;

        else if (i < 1000) 
            n[i + (i / 100) + (i % 100 / 10) + (i % 10)]++;

        else if (i < 10000)
            if (i + (i / 1000) + (i % 1000 / 100) + (i % 100 / 10) + (i % 10) < ARRAY_SIZE)
                n[i + (i / 1000) + (i % 1000 / 100) + (i % 100 / 10) + (i % 10)]++;
    }
    
    for (int i = 1; i < ARRAY_SIZE; i++)
        if (n[i] == 0)
            printf("%d\n", i);

    return 0;
}