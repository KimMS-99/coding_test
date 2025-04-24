#include <stdio.h>

int main(void)
{
    char S[100001] = {0, }, temp, rs[100001] = {0, };
    int tag = 0, count;

    scanf("%[^\n]s", S);

    int i = 0;

    while (S[i] != '\0')
    {
        count = 0;
        tag = 0;

        while (tag == 0 && S[i + count] != ' ' && S[i + count] != '\0')
        {
            if (S[i + count] == '<')
            {
                tag = 1;
                break;
            }
            count++;
        }
        
        for (int j = count + i - 1, n = 0; j >= i; j--, n++)
            rs[j] = S[i + n];

        i += count;
        
        while (tag == 1)
        {
            rs[i] = S[i];
            i++;
            if (S[i] == '>')
            {
                rs[i] = S[i];
                i++;
                break;
            }
        }

        while (S[i] == ' ')
        {
            rs[i] = S[i];
            i++;
        }
    }
    
    printf("%s\n", rs);
    
    return 0;
}