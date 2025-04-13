#include<stdio.h>

int main(void)
{
    
    char number[15]; // 대문자로 입력, 2 <= number <= 15
    int total = 0;
    
    scanf("%s", number);
    for (int i = 0; number[i] != '\0'; i++) {
        
        if (65 <= number[i] && number[i] <= 67) { // 2 : A B C
            total += 3;
        }
        else if (68 <= number[i] && number[i] <= 70) { // 3:  D E F
            total += 4;
        }
        else if (71 <= number[i] && number[i] <= 73) { // 4: G H I
            total += 5;
        }
        else if (74 <= number[i] && number[i] <= 76) { // 5: J K L
            total += 6;
        }
        else if (77 <= number[i] && number[i] <= 79) { // 6: M N O
            total += 7;
        }
        else if (80 <= number[i] && number[i] <= 83) { // 7: P Q R S
            total += 8;
        }
        else if (84 <= number[i] && number[i] <= 86) { // 8: T U V
            total += 9;
        }
        else if (87 <= number[i] && number[i] <= 90) { // 9: W X Y Z
            total += 10;
        }
        
    }
    
    printf("%d\n", total);
    
    return 0;
}