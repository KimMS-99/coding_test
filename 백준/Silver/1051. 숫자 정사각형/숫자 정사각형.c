#include <stdio.h>
#include <stdlib.h>

int square_size(int **square, int n, int m);
int N, M;

int main(void)
{
    scanf("%d %d", &N, &M);
    int **square = (int **)malloc(sizeof(int *) * N);
    for(int i = 0; i < N; i++)
        square[i] = (int *)malloc(sizeof(int) * M);

    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            scanf("%1d", &square[i][j]);

    int max_size = 0, temp_size;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            temp_size = square_size(square, i, j);
            if(temp_size > max_size)
                max_size = temp_size;
        }
    }

    printf("%d\n", max_size * max_size);

    for(int i = 0; i < N; i++)
        free(square[i]);
    free(square);

    return 0;
}

int square_size(int **square, int n, int m)
{
    int target = square[n][m], i = n, j = m, k = 1;
    int count = 0;
    while(1)
    {
        if(i + k >= N || j + k >= M)
            break;
        else if(target == square[i + k][j] && target == square[i][j + k] && target == square[i + k][j + k])
        {
            count = k;
        }
        k++;
    }
    return count + 1;
}