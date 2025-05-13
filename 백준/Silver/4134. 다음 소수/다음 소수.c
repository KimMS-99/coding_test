#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int test_case;
    scanf("%d", &test_case);
    long long *n = (long long *)malloc(sizeof(long long) * test_case);
    long long *result = (long long *)malloc(sizeof(long long) * test_case);
    for(int i = 0; i < test_case; i++)
        scanf("%lld", &n[i]);

    for(int i = 0; i < test_case; i++)
    {
        if(n[i] < 4)
            result[i] = n[i] == 3 ? 3 : 2;
        else
        {
            int j = 2, temp = (int)sqrt(n[i]);
            while(j <= temp)
            {
                if(n[i] % j == 0)
                {
                    n[i]++;
                    j = 2;
                    temp = (int)sqrt(n[i]);
                }
                else if(n[i] % j != 0)
                    j++;
            }
            result[i] = n[i];
        }
    }

    for(int i = 0; i < test_case; i++)
        printf("%lld\n", result[i]);
    
    free(n);
    free(result);
    
    return 0;
}