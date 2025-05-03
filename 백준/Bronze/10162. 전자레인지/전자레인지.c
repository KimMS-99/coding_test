#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int T; // 입력 초
    int a = 0, b = 0, c = 0;
    scanf("%d", &T);

    if(T / 300 >= 1)
    {
        a = T / 300;
        T = T % 300;
    }
    if(T / 60 >= 1)
    {
        b = T / 60;
        T = T % 60;
    }
    if (T / 10 >= 1)
    {
        c = T / 10;
        T = T % 10;      
    }

    if(T == 0)
        printf("%d %d %d", a, b, c);
    else
        printf("-1");

    return 0;
}