#include <stdio.h>
#include <string.h>

int main()
{
    int n, count = 0, i = 665;
    scanf("%d", &n);
    while (n != count)
    {
        i++;
        char c[20];
        sprintf(c, "%d", i);
        for (int j = 0; j < strlen(c) - 2; j++)
        {
            if (c[j] == '6' && c[j + 1] == '6' && c[j + 2] == '6')
            {
                count++;
                break;
            }
        }
    }
    printf("%d\n", i);
    return 0;
}