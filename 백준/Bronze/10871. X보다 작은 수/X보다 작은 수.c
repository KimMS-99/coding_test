#include<stdio.h>
int main(void)
{
    
    int n, a[10000], x, target[100], count = 0; // n : 정수 개수, a : 수열, x : 기준 값
    
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < x) {
            target[count] = a[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%d ", target[i]);
    }
    
    
    return 0;
}