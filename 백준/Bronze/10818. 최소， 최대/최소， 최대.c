#include<stdio.h>
int main(void)
{

    int n, min = 1000001, max = -1000001, n_array[1000000];
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &n_array[i]);
        if (max < n_array[i]) {
            max = n_array[i];
        }
        if (min > n_array[i])
        {
            min = n_array[i];
        }
    }
    
    printf("%d %d", min, max);
    
    return 0;
}