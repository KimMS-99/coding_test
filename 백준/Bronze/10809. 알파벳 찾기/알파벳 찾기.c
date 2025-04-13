#include<stdio.h>

int main(void)
{

    char s[100];
    int n[26];
    
    for (int i = 0; i < 26; i++) {
        n[i] = -1;
    }
    
    scanf("%s", s);
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (n[s[i] - 97] == -1) {
            n[s[i] - 97] = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        printf("%d ", n[i]);
    }
    
    return 0;
}