#include<stdio.h>

int main(void)
{

    int test_case, j;
    char s[1000];
    
    scanf("%d", &test_case);
    
    for (int i = 0; i < test_case; i++) {
        scanf("%s", s);
        for (j = 0; s[j] != '\0'; j++) {
        }
        printf("%c%c\n", s[0], s[j-1]);
    }

    return 0;
}