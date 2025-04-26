#include <stdio.h>
#include <string.h>

// 그대로 출력하기
int main(void)
{
    char c[101];
    while (fgets(c, sizeof(c), stdin) != NULL)
        printf("%s", c);
    
    return 0;
}