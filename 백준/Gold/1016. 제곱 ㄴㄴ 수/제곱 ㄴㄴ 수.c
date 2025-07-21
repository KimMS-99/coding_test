#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long min, max, temp;
    int count = 0;
    scanf("%lld %lld", &min, &max);
    long long ary_size = max - min + 1;
    char *ary = (char *)calloc(ary_size, sizeof(char));

    long long maxSqrt = (long long)sqrt(max);
    for (long long i = 2; i <= maxSqrt; i++)
    {
        long long ttemp = i * i;
        long long ttt = min % ttemp;
        if (ttt == 0)
            temp = min;
        else
            temp = min + ttemp - ttt;

        for (long long j = temp; j <= max; j += ttemp)
            ary[j - min] = 1;
    }
    for (long long i = 0; i < ary_size; i++)
        if (ary[i] == 0)
            count++;
    printf("%d\n", count);
}
