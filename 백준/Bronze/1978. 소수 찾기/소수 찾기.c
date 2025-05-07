#if 01

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t, n, cnt = 0, check;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        check = 0;
        scanf("%d", &n);
        for(int j = 2; j <= n / 2; j++)
            if(n % j == 0 && n != 2)
            {
                check = 1;
                break;
            }
        if(check == 0 && n != 1)
            cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}
#endif