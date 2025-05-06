#include <stdio.h>

int main(void)
{
    int n, m, sum = 0, max = 0;
    for(int i = 0; i < 4; i++)
    {
        scanf("%d %d", &n, &m);
        sum -= n;
        sum += m;
        if(max < sum)
            max = sum;
    }
    printf("%d", max);
    return 0;
}