#if 01

#include <stdio.h>
#include <string.h>

int main(void)
{
    int n[10] = {0, }; // 숫자 칸 저장
    int max = 0, temp;
    char s[1000000];

    scanf("%s", s);
    for(int i = 0; i < strlen(s); i++)
        n[s[i] - 48]++;

    temp = n[6] + n[9];
    if(temp % 2 == 0)
        n[6] = temp / 2;
    else
        n[6] = temp / 2 + 1;
    
    for(int i = 0; i < 9; i++)
        if(max < n[i])
            max = n[i];
    
    printf("%d", max);

    return 0;
}

#endif