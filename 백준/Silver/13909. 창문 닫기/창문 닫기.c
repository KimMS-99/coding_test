#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int r = 1, count = 0, i = 1;

    while(r <= n)
    {
        i += 2;
        r += i;
        count++;
    }

    printf("%d", count);

    return 0;
}
