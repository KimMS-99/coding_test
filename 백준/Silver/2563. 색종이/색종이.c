#include <stdio.h>

int main()
{
    int n, answer = 0;
    int paper[100][100] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        for (int j = a; j < a + 10; j++)
        {
            for (int k = b; k < b + 10; k++)
            {
                if (paper[j][k] == 0)
                {
                    paper[j][k] = 1;
                    answer++;
                }
            }
        }
    }
    printf("%d\n", answer);

    return 0;
}