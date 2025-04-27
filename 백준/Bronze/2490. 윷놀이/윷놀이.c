#include <stdio.h>

// 2490 윷놀이
int main(void)
{
    int a[4], count;

    for (int j = 0; j < 3; j++)
    {
        count = 0;
        for(int i = 0; i < 4; i++)
        scanf("%d", &a[i]);

        for (int  i = 0; i < 4; i++)
            if (a[i] == 1)
                count++;
        
        switch (count)
        {
        case 4:
            printf("E\n");
            break;
        case 3:
            printf("A\n");
            break;
        case 2:
            printf("B\n");
            break;
        case 1:
            printf("C\n");
            break;
        default:
            printf("D\n");
            break;
        }
    }
    
    return 0;
}