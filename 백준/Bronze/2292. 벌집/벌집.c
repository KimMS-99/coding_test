#include <stdio.h>

int main(void)
{


    int n, count = 1, s = 6;
    scanf("%d", &n);

    for (int i = 7; i < n; i += s)
    {
        s += 6;
        count++;
    }
    if (n == 1)
        count--;

    printf("%d\n", count + 1);

    return 0;
}