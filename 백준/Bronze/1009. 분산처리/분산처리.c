#if 01

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int T;
    int a, b, r;
    scanf("%d", &T);
    int *n = (int *)malloc(sizeof(int) * T);

    for(int i = 0; i < T; i++)
    {
        scanf("%d %d", &a, &b);
        r = a;
        for(int j = 1; j < b; j++)
        {
            r *= a;
            r %= 10;
        }
        if (r > 10)
            r %= 10;
        if (r == 0)
            n[i] = 10;
        else
            n[i] = r;
    }
    for (int i = 0; i < T; i++)
        printf("%d\n", n[i]);
    
    return 0;
}
#endif