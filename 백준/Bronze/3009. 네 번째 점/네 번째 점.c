#include <stdio.h>

int main(void)
{
    
    int x[3], y[3], rx, ry;

    for (int i = 0; i < 3; i++)
        scanf("%d %d", &x[i], &y[i]);

    if (x[0] == x[1])
        rx = x[2];
    else if (x[0] == x[2])
        rx = x[1];
    else 
        rx = x[0];

    if (y[0] == y[1])
        ry = y[2];
    else if (y[0] == y[2])
        ry = y[1];
    else 
        ry = y[0];
    
    printf("%d %d\n", rx, ry);
    
    return 0;
}