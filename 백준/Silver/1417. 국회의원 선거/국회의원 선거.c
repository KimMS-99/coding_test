#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t, count = 0;;
    scanf("%d", &t);
    int *n = (int *)malloc(sizeof(int) * t);
    for(int i = 0; i < t; i++)
        scanf("%d", &n[i]);

    while(1)
    {
        if(t == 1)
            break;
        int max = 1;
        for (int i = 2; i < t; i++)
        {
            if(n[i] > n[max])
            {
                max = i;
            }
        }

        if(n[0] > n[max])
            break;
        n[0]++;
        n[max]--;
        count++;
    }

    printf("%d", count);
    free(n);
    return 0;
}