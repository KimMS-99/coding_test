#include <stdio.h>
#include <math.h>

int prime_check(int num);
void digit_check(int num, int digit);

int input_digit;

int main(void)
{
    int sosu[4] = {2, 3, 5, 7};
    scanf("%d", &input_digit);

    for(int i = 0; i < 4; i++)
    {
        int digit = 1;
        digit_check(sosu[i], digit);
    }

    return 0;
}

void digit_check(int num, int digit)
{
    int check = prime_check(num);
    if(digit == input_digit && check == 1)
        printf("%d\n", num);
    else
    {
        for(int i = 1; i <= 9; i++)
            if(check == 1)
                digit_check(10 * num + i, digit + 1);
    }
}

int prime_check(int num)
{
    int check = 1;
    for(int i = 2; i <= sqrt(num); i++)
        if(num % i == 0)
        {
            check = 0;
            break;
        }
    return check;
}