#include<stdio.h>

int main(void)
{
    
    int n;
    int packet = 0;

    scanf("%d", &n);

    while (n >= 15 && n != 16 && n != 17 && n != 19 && n != 22)
    {
        n -= 15;
        packet += 3;
    }

    if (n < 15)
    {

        if (n % 3 == 0)
            packet += n / 3;

        else if ((n - 5) % 3 == 0)
            packet += (n - 5) / 3 + 1;

        else if (n % 5 == 0)
            packet += n / 5;

        else if ((n - 3) % 5 == 0)
            packet += (n - 3) / 5 + 1;
    
        else
            packet = -1;
    }
    else if (n > 15)
    {

        if ((n - 5) % 3 == 0)
            packet += (n - 5) / 3 + 1;

        else if ((n - 10) % 3 == 0)
            packet += (n - 10) / 3 + 2;
    }


    printf("%d", packet);
    
    return 0;
}