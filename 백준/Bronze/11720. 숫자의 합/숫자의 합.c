#include<stdio.h>

int main(void)
{

    int n_count, total = 0;
    char n[100];
    
    scanf("%d", &n_count);
    scanf("%s", n);
    
    for (int i = 0; i < n_count; i++) {
        total += (int)n[i] - 48;
    }
    
    printf("%d\n", total);

    return 0;
}