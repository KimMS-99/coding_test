#include <stdio.h>
#include <string.h>

int main(void)
{
    char c[101];
    int alpha[26] = {0, };

    scanf("%s", c);

    for (int i = 0; i < strlen(c); i++)
        alpha[c[i] - 97]++;
    
    for (int i = 0; i < 26; i++)
        printf("%d ", alpha[i]);    
    
    return 0;
}