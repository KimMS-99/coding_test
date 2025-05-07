#if 01

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long int n;
    scanf("%lld", &n);
    if (n == 1)
        return 0;

    else
    {
        long long int rn = n;
        long long int i = 2;
        while(1)
        {
            if(rn == 1)
                break;
            else if(rn % i == 0)
            {
                printf("%lld\n", i);
                rn /= i;
                i = 2;
            }
            else
                i++;
        }
    }
    
    return 0;
}
#endif