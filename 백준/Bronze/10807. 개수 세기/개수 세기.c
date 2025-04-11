#include<stdio.h>
int main(void)
{
    
    int n[100], n_count, target, target_count = 0;
    
    scanf("%d", &n_count);
    for (int i = 0; i < n_count; i++) {
        scanf("%d", &n[i]);
    }
    scanf("%d", &target);
    
    for (int i = 0; i < n_count; i++) {
        if (n[i] == target) {
            target_count++;
        }
    }
    
    printf("%d", target_count);
    
    return 0;
}