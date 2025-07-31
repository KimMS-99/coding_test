#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1001], b[1001];
    int c;
    scanf("%s %s %d", a, b, &c);
    printf("%d\n", atoi(a) + atoi(b) - c);
    printf("%d\n", atoi(strcat(a, b)) - c);

    return 0;
}