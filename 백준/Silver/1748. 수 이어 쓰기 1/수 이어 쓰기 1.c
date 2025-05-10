#include <stdio.h>

int main(void)
{
    int n, count=0;
	scanf("%d", &n);

	for(int i = 1; i <= n; i *= 10)
        count += (n - i + 1);

	printf("%d\n", count);
    return 0;
}