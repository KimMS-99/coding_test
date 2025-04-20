#include<stdio.h>

int main(void)
{
    
    char c[101];

    scanf("%s", c);

    for (int i = 0; c[i] != '\0'; i++)
        if (c[i] >= 97)
            c[i] -= 32;
        else
            c[i] += 32;

    printf("%s", c);
    
    return 0;
}