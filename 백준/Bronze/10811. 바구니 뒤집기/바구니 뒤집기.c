#include<stdio.h>

void array_reverse(int *px, int x, int y);

int main(void)
{
    
    int cart[100], n, m; // n : 바구니 개수, m : 역순 횟수
    int x, y; // x번 바구니부터 y번 바구니까지 역순으로
    
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i++) {
        cart[i] = i+1;
    }
    
    for (int i = 0; i < m; i++)
    {
        
        scanf("%d %d", &x, &y);
        array_reverse(cart, x-1, y-1);
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", cart[i]);
    }
    printf("\n");
    
    return 0;
}

void array_reverse(int *px, int x, int y) // 2 5
{
    
    int t;
    for (int i = x, j = y; i < j; i++, j--) {
        
        t = *(px+i);
        *(px+i) = *(px+j);
        *(px+j) = t;
    }
}