#include <stdio.h>

// 10797 10부제
int main(void)
{
    int n, car[5], count = 0;
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &car[i]);
        if(car[i] == n)
            count++;
    }

    printf("%d", count);

    return 0;
}