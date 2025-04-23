#include <stdio.h>

int main(void)
{
    
    int x = 1, y = 1;
    int xv, yv;
	int p = 2, count = 1;
	long long n;

	scanf("%lld", &n);

	for(int i = 0; i < n; i++)
	{
        if (p - count == 0)
        {
            p++;
            count = 1;
            if (x == y)
                x++;
            else
                y++;
        }
        
		if (x == y)
        {
            xv = p - count;
            yv = p - xv;
        }
        else
        {
            yv = p - count;
            xv = p - yv;
        }
        count++;
	}

	printf("%d/%d", xv, yv);
    
    return 0;
}