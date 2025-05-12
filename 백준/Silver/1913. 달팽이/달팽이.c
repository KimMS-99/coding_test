#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n, target;
    scanf("%d %d", &n, &target);
    int num = 1, x = n / 2, y = n / 2, res_x, res_y;
    int **ary;
    ary = (int **)malloc(sizeof(int *) * n);
    for(int i = 0; i < n; i++)
        ary[i] = (int *)malloc(sizeof(int) * n);

    ary[y][x] = num++;
    int a = 2;
    for(int i = 1; i < n; i += 2)
    {
        y--;
        for(int j = 0; j < a; j++)
        {
            ary[y][x++] = num++;
        }
        y++;
        x--;
        for (int j = 0; j < a; j++)
        {
            ary[y++][x] = num++;
        }
        y--;
        x--;
        for (int j = 0; j < a; j++)
        {
            ary[y][x--] = num++;
        }
        y--;
        x++;
        for (int j = 0; j < a - 1; j++)
        {
            ary[y--][x] = num++;
        }
        a += 2;
        ary[y][x] = num++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(target == ary[i][j])
            {
                res_x = j + 1;
                res_y = i + 1;
            }
            printf("%d ", ary[i][j]);
        }
        printf("\n");
    }
    printf("%d %d", res_y, res_x);

    for(int i = 0; i < n; i++)
        free(ary[i]);
    free(ary);

    return 0;
}
