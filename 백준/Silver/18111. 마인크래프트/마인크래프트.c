#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    int N, M;
    long long B;
    long long min = LLONG_MAX;
    int a;
    scanf("%d %d %lld", &N, &M, &B);
    int **ary = (int **)malloc(sizeof(int *) * N);
    for (int i = 0; i < N; i++)
        ary[i] = (int *)malloc(sizeof(int) * M);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &ary[i][j]);

    for (int i = 0; i <= 256; i++)
    {
        long long tempM = B, time_count = 0;
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                if (ary[j][k] > i)
                {
                    time_count += (ary[j][k] - i) * 2;
                    tempM += ary[j][k] - i;
                }
                else if (ary[j][k] < i)
                {
                    time_count += i - ary[j][k];
                    tempM -= i - ary[j][k];
                }
            }
        }
        if ((min > time_count || (time_count == min && i > a)) && tempM >= 0)
        {
            a = i;
            min = time_count;
            // printf("a : %d, min : %lld\n", a, min);
        }
    }

    printf("%lld %d\n", min, a);
    for (int i = 0; i < N; i++)
        free(ary[i]);
    free(ary);

    return 0;
}