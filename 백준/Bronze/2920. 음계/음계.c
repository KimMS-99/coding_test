#include<stdio.h>
#include<string.h>

int main(void)
{
    
    char a[18] = "1 2 3 4 5 6 7 8", d[18] = "8 7 6 5 4 3 2 1", input[18];

    scanf("%[^\n]s", input);

    if (strcmp(a, input) == 0)
    {
        printf("ascending");
    }
    else if (strcmp(d, input) == 0)
    {
        printf("descending");
    }
    else
        printf("mixed");
 
    return 0;
}