#if 01

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    while (1)
    {
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0)
            break;
        else if (a % b == 0)
            fputs("multiple\n", stdout);
        else if (b % a == 0)
        {
            fputs("factor\n", stdout);
        }
        else 
            fputs("neither\n", stdout);
        
    }
    

    return 0;
}
#endif