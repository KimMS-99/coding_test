#include <stdio.h>

int main(void)
{
    
    int H, W, N, T; // H : 층 수, W : 방 수, N : 몇번째 손님인지, T : testcase
    scanf("%d", &T);
    int h, m;

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &H, &W, &N);
        h = 1;
        m = 1;
        for (int j = 1; j < N; j++)
        {
            if (h == H)
            {
                m++;
                h = 1;
            }
            else
                h++;
        }
        if(m < 10)
            printf("%d0%d\n", h, m);
        else
            printf("%d%d\n",h, m);
    }
    
    return 0;
}