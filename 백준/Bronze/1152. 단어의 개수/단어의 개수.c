#include<stdio.h>

int main(void)
{

    int word_count = 1, i;
    char c[1000000];
    
    scanf("%[^\n]s", c);
    
    if (c[0] == ' ') {
        word_count--;
    }
    
    for (i = 0; c[i] != '\0'; i++) {
        if (c[i] == ' ') {
            word_count++;
        }
    }
    if (c[i-1] == ' ') {
        word_count--;
    }
    printf("%d\n", word_count);
    
    return 0;
}