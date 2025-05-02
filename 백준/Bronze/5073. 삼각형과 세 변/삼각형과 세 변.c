#include <stdio.h>
#include <stdlib.h>

void sort(int *pn);
// 5073 삼각형과 세 변
int main(void)
{
    int n[3];
    while(1)
    {
        for (int i = 0; i < 3; i++)
            scanf("%d", &n[i]);
        if(n[0] == 0 && n[1] == 0 && n[2] == 0)
            break;
            sort(n);
        if(n[0] == n[1] && n[0] == n[2])
            printf("Equilateral\n");
        else if(n[0] >= (n[1] + n[2]))
            printf("Invalid\n");
        else if(n[0] != n[1] && n[0] != n[2] && n[1] != n[2])
            printf("Scalene\n");
        else
            printf("Isosceles\n");
    }
    return 0;
}

void sort(int *pn)
{
    int temp, i, j;
    for (i = 1; i < 3; i++)
    {
        temp = pn[i];
        for (j = i - 1; j >= 0 && temp > pn[j]; j--)
        {
            pn[j + 1] = pn[j];
        }
        pn[j + 1] = temp;   
    }
}