#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int N;
    char temp[51];
    char input[50][51];
    scanf("%d", &N);

    for(int i = 0; i < N; i++)
        scanf("%s", input[i]);
    strcat(temp, input[0]);
    for(int i = 1; i < N; i++)
        for (int j = 0; j < strlen(temp); j++)
            if(temp[j] != input[i][j])
                temp[j] = '?';
    printf("%s", temp);

    return 0;
}
