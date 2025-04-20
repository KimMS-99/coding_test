#include<stdio.h>

int main(void)
{
    
    double result = 0;
    char score[3];

    scanf("%s", score);

    if (score[0] == 'F')
        result = 0.0;

    else
    {

    if (score[0] == 'A')
        result += 4.0;
    else if (score[0] == 'B')
        result += 3.0;   
    else if (score[0] == 'C')
        result += 2.0;
    else if (score[0] == 'D')
        result += 1.0;

    if (score[1] == '+')
        result += 0.3;
    else if (score[1] == '-')
        result -= 0.3;
    }

    printf("%.1lf\n", result);
    return 0;
}