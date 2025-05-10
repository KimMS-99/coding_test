#include <stdio.h>
#include <stdlib.h>

void toggle_change(int *toggle, int num);

int main(void)
{
    int toggle_T, student_T;
    int gender, number; // gender -> 1 : m, 2 : f

    scanf("%d", &toggle_T);

    int *toggle = (int *)malloc(sizeof(int) * toggle_T);
    for(int i = 0; i < toggle_T; i++)
        scanf("%d", &toggle[i]);
    
    scanf("%d", &student_T);

    for(int i = 0; i < student_T; i++)
    {
        scanf("%d %d", &gender, &number);

        if(gender == 1)
            for(int j = number; j <= toggle_T; j += number)
                toggle_change(toggle, j);
        else
        {
            toggle_change(toggle, number);
            int symmetry_l = number - 1;
            int symmetry_r = number + 1;
            while (symmetry_l > 0 && symmetry_r < toggle_T + 1 && toggle[symmetry_l -1] == toggle[symmetry_r - 1])
            {
                toggle_change(toggle, symmetry_l--);
                toggle_change(toggle, symmetry_r++);
            }
        }
    }

    for(int i = 1; i <= toggle_T; i++)
    {
        printf("%d ", toggle[i-1]);
        if(i % 20 == 0)
            printf("\n");
    }
    free(toggle);
    return 0;
}

void toggle_change(int *toggle, int num)
{
    if(toggle[num - 1] == 0)
        toggle[num - 1] = 1;
    else
        toggle[num - 1] = 0;
}