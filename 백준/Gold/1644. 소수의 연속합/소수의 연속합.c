#include <stdio.h>
#include <stdlib.h>

#define DEBUG 0

int main(void)
{
    int input;
    int result_count = 0;
    scanf("%d", &input);
    if (input == 1)
    {
        printf("%d", 0);
        return 0;
    }
    int *num = (int *)calloc(input + 1, sizeof(int));
#if DEBUG
    if (num == NULL)
    {
        printf("할당 실패\n");
        return 1;
    }
#endif
    num[0] = 1;
    num[1] = 1;
    int *sosu = NULL;
    int sosu_size = 0;

    for (int i = 2; i <= input; i++)
    {
        if (num[i] == 0)
        {
            sosu_size++;
            int *temp = realloc(sosu, sizeof(int) * sosu_size);
#if DEBUG
            if (temp == NULL)
            {
                printf("재 할당 실패\n");
                free(num);
                free(sosu);
                return 1;
            }
#endif
            sosu = temp;
            sosu[sosu_size - 1] = i;
            for (long long j = (long long)i * i; j <= input; j += i)
                num[j] = 1;
        }
    }

    free(num);
    int start = 0, end = 0, sum = 0;

    while (1)
    {
        if (sum == input)
            result_count++;

        if (sum >= input)
        {
            if (start >= sosu_size)
                break;
            sum -= sosu[start++];
        }
        else
        {
            if (end >= sosu_size)
                break;
            sum += sosu[end++];
        }
    }

#if DEBUG
    printf("sosu_size : %d, sosu[sosusize] : %d", sosu_size, sosu[sosu_size - 1]);
    for (int i = 0; i < sosu_size; i++)
        printf("\n%d ", sosu[i]);
#endif

    printf("%d\n", result_count);

    free(sosu);

    return 0;
}
