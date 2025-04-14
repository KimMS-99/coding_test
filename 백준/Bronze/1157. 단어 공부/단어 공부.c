#include<stdio.h>

int main(void)
{
   
    char s[1000001];
    int n[26] = {0,}, max = 0, index = -1;
    
    scanf("%s", s);
    
    for (int i = 0; s[i] != '\0'; i++) {
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
            if (s[i] > 90) {
                s[i] -= 32;
            }
            n[s[i] - 65] += 1;
        }
    }
    
    for (int i = 0; i < 26; i++)
    {
        
        if (n[i] > max)
        {
            
            max = n[i];
            index = i;
        }
        else if (n[i] == max)
        {
            
            index = -1;
        }
    }
    
    if (index >= 0) printf("%c", index + 65);
    else printf("?");
    
    return 0;
}