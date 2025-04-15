#include<stdio.h>
#include <string.h>

// 정답은 이미 맞았었지만 2차원 배열에 이해를 위해서 연습
int main(void)
{
    
    char alphabet[8][4] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="}, input[100];
    int count = 0, len, c = 0;
    
    scanf("%s", input);
    
    for (int i = 0; input[i] != '\0'; i++)
    {
        
        for (int j = 0; j < 8; j++)
        {
            
            len = strlen(alphabet[j]);
            
            if(!strncmp(alphabet[j], input + i, len))
            {
                
                i += (len-1);
                count++;
                c = 1;
                break;
            }
        }
        
        if (c == 0) {
            count++;
        }
        else c = 0;
    }
    
    printf("%d\n", count);
    
    return 0;
}