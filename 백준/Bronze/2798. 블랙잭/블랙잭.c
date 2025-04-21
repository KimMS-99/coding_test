#include<stdio.h>
#include<stdlib.h>

int balck_jack_find(int *b, int size, int target);

int main(void)
{
    
    int n, m;

    scanf("%d %d", &n, &m);

    int *card = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) scanf("%d", &card[i]);
    
    printf("%d\n", balck_jack_find(card, n, m));

    return 0;
}

int balck_jack_find(int *b, int size, int target)
{

    int sum, m_find = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {

                sum = b[i] + b[j] + b[k];
                if (sum >= m_find && sum <= target)
                {
                    m_find = sum;
                }
                
            }
        }
    }

    return m_find;
    
}