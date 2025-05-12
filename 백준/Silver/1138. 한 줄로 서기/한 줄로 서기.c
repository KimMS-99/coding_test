#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int *p = (int *)calloc(sizeof(int), N);
    int *s = (int *)calloc(sizeof(int), N);
    for(int i = 0; i < N; i++)
        scanf("%d", &p[i]);

    int k = 1, count = 0;
    s[count] = N;
    for(int i = N - 1; i >= 0; i--)
    {
        if(p[i] < count)
            for(int j = count - 1; j >= p[i]; j--)
            {
                if(j + 1 == N)
                    break;
                s[j + 1] = s[j];
            }
        s[p[i]] = i + 1;
        count++;
    }
    for(int i = 0; i < N; i++)
        printf("%d ", s[i]);
    
    free(p);
    free(s);

    return 0;
}
