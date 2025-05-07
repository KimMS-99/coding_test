#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b);

int main(void)
{
    int t;
    scanf("%d", &t);
    int *n = (int *)malloc(sizeof(int) * t);

    for (int i = 0; i < t; i++)
        scanf("%d", &n[i]);
    qsort(n, t, sizeof(int), compare);
    
    for(int i = 0; i < t; i++)
        printf("%d\n", n[i]);
    free(n);
    return 0;
}

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}