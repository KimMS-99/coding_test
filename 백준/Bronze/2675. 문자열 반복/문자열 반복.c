#include<stdio.h>

int main(void)
{

    int test_case, repeat_c;
    char c[20];
    
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++) {
        scanf("%d %s", &repeat_c, c);
        for (int j = 0; c[j] != '\0'; j++) {
            for (int k = 0; k < repeat_c; k++) {
                printf("%c", c[j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}