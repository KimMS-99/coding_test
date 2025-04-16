#include<stdio.h>

int main(void)
{
    
    char chalkboard[5][15];
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 15; j++) {
            chalkboard[i][j] = '\0';
        }
    }
    
    for (int i = 0; i < 5; i++)
            scanf("%s", chalkboard[i]);
    
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (chalkboard[j][i] != '\0')
                printf("%c", chalkboard[j][i]);
        }
    }
    
    return 0;
}