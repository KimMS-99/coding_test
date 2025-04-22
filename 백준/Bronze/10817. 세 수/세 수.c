#include <stdio.h>

int main(void)
{
    
    int a, b, c, median;

    scanf("%d %d %d", &a, &b, &c);

    if ((a >= b && a <= c) || (a >= c && a <= b))
        median = a;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        median = b;
    else
        median = c;
    
    printf("%d\n", median);

    return 0;
}