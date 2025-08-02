#include <stdio.h>

int main()
{
    int n, m, nn, mm;
    scanf("%d %d", &n, &m);
    nn = n;
    mm = m;
    while (m != 0)
    {
        int t = n % m;
        n = m;
        m = t;
    }
    printf("%d\n%d", n, nn * mm / n);

    return 0;
}