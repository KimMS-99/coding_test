#include<stdio.h>

int main(void)
{
    
    char alphabet[100];
    int count = 0;
    
    scanf("%s", alphabet);
    
    for (int i = 0; alphabet[i] != '\0'; i++)
    {
        
        if (alphabet[i] == 'c')
        {
            
            if (alphabet[i + 1] == '-' || alphabet[i + 1] == '=')
            {
                
                i++;
                count++;
            }
            else count++;
        }
        
        else if (alphabet[i] == 'd') // dz=
        {
            
            if (alphabet[i + 1] == 'z')
            {
                
                if (alphabet[i + 2] == '=')
                {
                    
                    i += 2;
                    count++;
                }
                else count++;
            }
            else if (alphabet[i + 1] == '-')
            {
                
                i++;
                count++;
            }
            else count++;
        }
        
        else if (alphabet[i] == 'l' || alphabet[i] == 'n')
        {
            
            if (alphabet[i + 1] == 'j')
            {
             
                i++;
                count++;
            }
            else count++;
        }
        
        else if (alphabet[i] == 's' || alphabet[i] == 'z')
        {
            
            if (alphabet[i + 1] == '=')
            {
                
                i++;
                count++;
            }
            else count++;
        }
        
        else count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}