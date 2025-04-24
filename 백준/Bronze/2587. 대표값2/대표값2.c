#include <stdio.h>
#include <string.h>

int main(void)
{
    int n[5], center, avg = 0, min, temp;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        avg += n[i];
    }
    avg /= 5;
    for (int i = 0; i < 5; i++)
    {
        min = 101;
        for (int j = i; j < 5; j++)
        {
            if (min > n[j])
            {
                min = n[j];
                temp = j;
            }
        }
        n[temp] = n[i];
        n[i] = min;
    }
    center = n[2];
    printf("%d\n%d", avg, center);  
    
    return 0;
}