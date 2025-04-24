#include <stdio.h>
#include <stdlib.h>

typedef struct hw
{
    int k;
    int h;
    int rank;
}hw;

int main(void)
{
    int n;
    scanf("%d", &n);
    hw *size;
    
    size = (hw *)malloc(sizeof(hw) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &size[i].k, &size[i].h);
        size[i].rank = n;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            
            if (size[i].k > size[j].k && size[i].h > size[j].h)
                size[i].rank--;
            else if ((size[i].k >= size[j].k && size[i].h <= size[j].h) || (size[i].k <= size[j].k && size[i].h >= size[j].h))
                size[i].rank--;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", size[i].rank);
    
    
    free(size);
    
    return 0;
}