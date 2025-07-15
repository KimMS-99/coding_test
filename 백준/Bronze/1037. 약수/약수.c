#include <stdio.h>
int main(void)
{

    int t, n;
    int min = 1000001, max = 0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if (min > n)
            min = n;
        if (max < n)
            max = n;
    }
    printf("%d\n", max * min);

    return 0;
}