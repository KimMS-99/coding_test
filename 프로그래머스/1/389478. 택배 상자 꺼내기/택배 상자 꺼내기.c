#include <stdio.h>
#include <stdlib.h>

int solution(int n, int w, int num) {
        int y, target_x;
    scanf("%d %d %d", &n, &w, &num);
    if(n % w == 0)
        y = n / w;
    else
        y = n / w + 1;
    int **box = (int **)calloc(sizeof(int *), y);
    for(int i = 0; i < y; i++)
        box[i] = (int *)calloc(sizeof(int), w);
    int box_num = n;
    int direction = y;
    int empty = w * y - n;

    for(int i = 0; i < y; i++)
    {
        if(direction % 2 == 0)
        {
            for(int j = 0; j < w; j++)
            {
                if(empty > 0)
                {
                    empty--;
                    continue;
                }
                if(box_num == num)
                    target_x = j;
                box[i][j] = box_num--;
            }
        }
        else
        {
            for (int j = w - 1; j >= 0; j--)
            {
                if(empty > 0)
                {
                    empty--;
                    continue;
                }
                if(box_num == num)
                    target_x = j;
                box[i][j] = box_num--;
            }
        }
        direction--;
    }

    int i = 0, result_count = 1;
    while(1)
    {
        if(box[i][target_x] == num)
            break;
        if(box[i][target_x] != 0)
            result_count++;
        i++;
    }

    printf("%d", result_count);

    for(int i = 0; i < y; i++)
        free(box[i]);
    free(box);

    return result_count;
}