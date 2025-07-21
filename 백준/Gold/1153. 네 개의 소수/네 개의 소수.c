#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int input, *sosu = NULL, sosu_size = 0;
    scanf("%d", &input);
    int *ary = (int *)calloc(input, sizeof(int));
    ary[0] = 1; // 1 제외
    for (int i = 2; i < input; i++)
        if (ary[i - 1] == 0)
        {
            sosu_size++;
            int *temp = realloc(sosu, sizeof(int) * sosu_size);
            sosu = temp;
            sosu[sosu_size - 1] = i;
            for (long long j = (long long)i * i; j <= input; j += i)
                ary[j - 1] = 1;
        }
    free(ary);

    for (int i = 0; i < sosu_size; i++)
        for (int j = i; j < sosu_size; j++)
            for (int k = j; k < sosu_size; k++)
                for (int l = k; l < sosu_size; l++)
                    if (input == sosu[i] + sosu[j] + sosu[k] + sosu[l])
                    {
                        printf("%d %d %d %d", sosu[i], sosu[j], sosu[k], sosu[l]);
                        return 0;
                    }

    printf("%d\n", -1);
    free(sosu);
    return 0;
}
