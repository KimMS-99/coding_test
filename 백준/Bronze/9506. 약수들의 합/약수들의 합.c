#if 01

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, r;
    while (1)
    {
        scanf("%d", &n);
        r = 0;
        if(n == -1)
            break;
        else
        {
            for (int i = 1; i <= n / 2; i++)
                if(n % i == 0)
                    r += i;
            if(r == n)
            {
                printf("%d = ", n);
                for(int i = 1; i <= n / 2; i++)
                {
                    if(i == n/2)
                        printf("%d\n", i);
                    else if(n % i == 0)
                        printf("%d + ", i);
                }
            }
            else
                printf("%d is NOT perfect.\n", n);
        }
    }

    return 0;
}
#endif