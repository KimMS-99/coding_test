#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    
    int n, count = 0, m;

    scanf("%d %d", &n, &m);

    int *s = (int *)malloc(sizeof(int) * n);

    for (int i = 1; i <= n; i++) 
        if (n % i == 0)
        {
            s[count++] = i;
        }
    s[count] = n;
    
    if (m > count)
        printf("%d\n", 0);
    
    else
        printf("%d\n", s[m - 1]);

    free(s);

    return 0;
}