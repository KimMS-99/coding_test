#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[100000], num[100000];
    int len;

    while (1)
    {
        scanf("%s", input);
        len = strlen(input);
        
        for (int i = 0; num[i] != '\0'; i++)
            num[i] = '\0';

        for (int j = len - 1, k = 0; j >= 0; j--, k++)
            num[j] = input[k];

        if(input[0] == '0')
            break;
        else if (strcmp(num, input) == 0)
            printf("yes\n");
        else
            printf("no\n");
    }
    
    return 0;
}