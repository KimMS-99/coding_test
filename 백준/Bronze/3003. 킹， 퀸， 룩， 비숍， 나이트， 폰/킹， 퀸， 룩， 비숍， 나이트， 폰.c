#include<stdio.h>

int main(void)
{
   // 킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8
    int k = 1, q = 1, r = 2, b = 2, n = 2 ,p = 8;
    int k_i, q_i, r_i, b_i, n_i, p_i;
    
    scanf("%d %d %d %d %d %d", &k_i, &q_i, &r_i, &b_i, &n_i, &p_i);
    printf("%d %d %d %d %d %d\n", k-k_i, q - q_i, r - r_i, b - b_i, n - n_i, p - p_i);
    
    return 0;
}