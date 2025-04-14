#include<stdio.h>

int main(void)
{
   
    char s[100], s1[100];
    int end = 0, p = 1;
    
    scanf("%s", s);
    
    for (int i = 0; s[i] != '\0'; i++) {
        end++;
    }
    for (int i = 0, j = end-1; i < end; i++, j--) {
        s1[j] = s[i];
    }
    
    for (int i = 0; i < end; i++) {
        if (s[i] != s1[i]) {
            p = 0;
            break;
        }
    }
    
    printf("%d\n", p);
    
    return 0;
}