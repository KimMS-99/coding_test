#include<stdio.h>
int main(void)
{
    
    int n;
    
    scanf("%d", &n);
    
    // 위쪽
//    *        *
//    **      **
//    ***    ***
//    ****  ****
//    **********
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        for (int k = i+1; k < n*2 - (i+1); k++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // 아래쪽
    //****  ****
    //***    ***
    //**      **
    //*        *
    int bottom = n-1;
    for (int i = 0; i < bottom; i++) {
        for (int j = bottom; j > i; j--) {
            printf("*");
        }
        for (int k = 0; k < (i+1)*2; k++) {
            printf(" ");
        }
        for (int j = bottom; j > i; j--) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}