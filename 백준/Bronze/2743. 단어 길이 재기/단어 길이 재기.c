#include<stdio.h>

int main(void)
{

    char s[1000];
    int count = 0;
    
    scanf("%s", s);
    
    for (int i = 0; s[i] != '\0'; i++) {
        count++;
    }
    printf("%d", count);

    return 0;
}