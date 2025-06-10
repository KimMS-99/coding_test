#include <stdio.h>
int main(void)
{
    int n, s = 6;
    scanf("%d", &n);
    for (int i = 7; i < n; i += s)
        s += 6;
    printf("%d", n == 1 ? 1 : s / 6 + 1);
    return 0;
}