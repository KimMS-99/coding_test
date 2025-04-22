#include <stdio.h>
#include <stdlib.h>

void sort(int *pa, int size);

int main(void)
{
    
    int n;
    scanf("%d", &n);

    int *a = (int *)malloc(sizeof(int) * n);
    int *p = (int *)malloc(sizeof(int) * n);
    int *s = (int *)malloc(sizeof(int) * n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); 
        s[i] = a[i];
    }

    sort(s, n);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == s[j])
            {
                p[i] = j;
                s[j] = -1;
                break;
            }
        }
    }
    

    for (int i = 0; i < n; i++)
        printf("%d ", p[i]);
    
    free(a);
    free(p);

    return 0;
}

void sort(int *pa, int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int min = i, temp;

        for (int j = i + 1; j < size; j++)
            if (pa[min] > pa[j])
                min = j;

        temp = pa[min];
        pa[min] = pa[i];
        pa[i] = temp;
    }
}
