#if 01

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, k, p; // n : 모든 정수, k : 지워지는 수 넘버, p : 가장 작은 지울 수
    int check[1000] = {0, };
    scanf("%d %d", &n, &k);

    int i = 0, count = 2;
    while (i < k)
    {
        if(check[count - 2] != 0)
        {
            count++;
            continue;
        }
        else
        {
            for(int j = count; j <= n && i < k; j += count)
            {
                if(check[j - 2] != 0)
                    continue;
                else
                {
                    check[j - 2] = 1;
                    p = j;
                    i++;
                }
            }
        }
        count++;
    }
    
    printf("%d\n", p);

    return 0;
}

#endif