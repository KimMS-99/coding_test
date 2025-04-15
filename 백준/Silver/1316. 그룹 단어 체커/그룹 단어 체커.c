#include<stdio.h>
#include <string.h>

int checkers(char *pc);

int main(void)
{
    
    int n, count = 0;
    char word[100];
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        
        scanf("%s", word);
        count += checkers(word);
    }
    
    printf("%d", count);
    
    return 0;
}

int checkers(char *pc)
{
    
    int alphabet[26] = {0,};
    
    for (int i = 0; pc[i] != '\0'; i++)
    {
        
        if (alphabet[pc[i] - 97] == 0 || pc[i] == pc[i-1]) alphabet[pc[i] - 97] = 1;
        else return 0;
    }
    return 1;
}