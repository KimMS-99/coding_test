#if 01

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, y; // x : 월, y : 일
    char *week[8] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    
    scanf("%d %d", &x, &y);
    int r = y;
    for(int i = 1; i < x; i++)
    {
        switch (i)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            r += 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            r += 30;
        default:
            r += 28;
            break;
        }
    }
    r %= 7;
    if(r == 0)
        printf("%s", week[6]);
    else
        printf("%s", week[r - 1]);
    
    return 0;
}
#endif