#include<stdio.h>

int main(void)
{
    
    int max = -1, grid_x, grid_y;
    int grid[9][9];
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &grid[i][j]);
            if (grid[i][j] > max) {
                max = grid[i][j];
                grid_y = i + 1;
                grid_x = j + 1;
            }
        }
    }
    
    printf("%d\n", max);
    printf("%d %d", grid_y, grid_x);
    
    return 0;
}