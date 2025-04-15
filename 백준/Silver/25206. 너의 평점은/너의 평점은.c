#include<stdio.h>

int main(void)
{
    
    char subject[51], rating[3];
    double grade, avg, total = 0, time = 0;
    
    for (int i = 0; i < 20; i++)
    {
        scanf("%s %lf %s", subject, &grade, rating);
        
        if (rating[0] == 'P') continue;
        
        else if (rating[0] >= 65 && rating[0] <= 68)
        {
            
            if (rating[1] == '+')
            {
                
                total += ((69-rating[0]) + 0.5) * grade;
            }
            else total += (69-rating[0]) * grade;
        }
        time += grade;

    }
    
    avg = total / time;
    
    printf("%.6lf\n", avg);
    
    return 0;
}