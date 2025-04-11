#include<stdio.h>
int main(void)
{
    
    int n;
    
    scanf("%d", &n);
    
    // 위쪽
//    *********
//     *******
//      *****
//       ***
//        *
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < i; k++) {
            printf(" ");
        }
        for (int j = i; j < n*2-i-1; j++) { // ~~ 9 7 5 3 1
            printf("*");
        }
        printf("\n");
    }
    
    // 아래쪽
//    ***
//   *****
//  *******
// *********
    int bottom = n-1;
    for (int i = 0; i < bottom; i++) {
        for (int k = i; k < bottom-1; k++) {
            printf(" ");
        }
        for (int j = -2-i; j <= i; j++) { // 3 5 7 9 ~~
            printf("*");
        }
        printf("\n");
    }
    return 0;
}