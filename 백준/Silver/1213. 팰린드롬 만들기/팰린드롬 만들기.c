#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[51], alphabet[26];
    int alpha[26] = {0, }, check = 0, len, a = 27;
    scanf("%s", input);
    len = strlen(input);

    for (int i = 0; i < len; i++)
        alpha[input[i] - 65]++;
    
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] % 2 != 0 && alpha[i] != 0){
            check++;
            a = i;
            alphabet[i] = i + 65;
        }
        else if(alpha[i] % 2 == 0 && alpha[i] != 0)
            alphabet[i] = i + 65;
    }

    if (check > 1)
        printf("I'm Sorry Hansoo");
    else
    {
        if (alpha[a] > 1 && check != 0)
        {
            alpha[a]--;
        }
        
        for (int i = 0; i < 26; i++)
            if (alpha[i] % 2 == 0)
                for (int j = alpha[i] / 2; j > 0; j--)
                    if(alphabet[i] != '\0')
                        printf("%c", alphabet[i]);
        
        if (check == 1)
            printf("%c", alphabet[a]);

        for (int i = 25; i >= 0; i--)
            if (alpha[i] % 2 == 0)
                for (int j = alpha[i] / 2; j > 0; j--)
                    if(alphabet[i] != '\0')
                        printf("%c", alphabet[i]);
    }
        
    return 0;
}