#include<stdio.h>

int main(void)
{
    
    int subject[1000], n, index; // n : 과목 개수
    double avg, total = 0, max = 0.0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d", &subject[i]);
        
        if (subject[i] > max) {
            
            max = subject[i] * 1.0;
            index = i;
        }
    }
    
    for (int i = 0; i < n; i++) {
            total += subject[i] / max * 100;
    }

    avg = total / n;
    printf("%.2lf\n", avg);
    
    return 0;
}