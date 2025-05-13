#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);
    int *tf = (int *)calloc(M + 1, sizeof(int));

    for(int i = 2; i <= M; i++)
        if (tf[i] == 0)
            for(long long int j = (long long)i * i; j <= M; j += i)
                tf[j] = 1;
    
    for(int i = N; i <= M; i++)
        if(tf[i] == 0 && i != 1)
            printf("%d\n", i);
    
    free(tf);

    return 0;
}