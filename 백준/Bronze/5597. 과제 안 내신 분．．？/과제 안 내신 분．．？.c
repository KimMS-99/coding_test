#include<stdio.h>

int main(void)
{
    
    int n[30] = {0, }, input;
    
    for (int i = 0; i < 28; i++)
    {
        
        scanf("%d", &input);
        n[input-1] = input;
    }
    
    for (int i = 0; i < 30; i++) {
        if (n[i] == 0) {
            printf("%d\n", i + 1);
        }
    }
    
    return 0;
}