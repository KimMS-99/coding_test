#include<stdio.h>
#include<stdlib.h>

void sort(int *px, int n);

//25305 커트라인
int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    int *x = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &x[i]);
    sort(x, n);

    printf("%d", x[k - 1]);

    return 0;
}

void sort(int *px, int n)
{
    int i, j, temp;
  
    for (i = 1; i < n; i++)
    {
        temp = px[i];
        for(j = i - 1; j >= 0 && temp > px[j]; j--)
            px[j + 1] = px[j];
        px[j + 1] = temp;
    }
}