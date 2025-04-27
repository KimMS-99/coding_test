#include <stdio.h>

void sort(int *n);

//2752 세수정렬
int main(void)
{
    int a[3], temp;
    for (int i = 0; i < 3; i++)
        scanf("%d", &a[i]);
    sort(a);
    for(int i = 0; i < 3; i++)
        printf("%d ", a[i]);
    
}

void sort(int *n){
    int i, j, temp;
  
    for(i = 1; i < 3; i++){
        temp = n[i];
        for(j = i - 1; j >= 0 && n[j] > temp; j--)
            n[j + 1] = n[j];
        n[j + 1] = temp;
    }
}