#include<stdio.h>

int main(void)
{
    
    int a, b, v; // v : 나무 막대 길이, a : 낮에 올라가는 길이, b : 밤에 미끄러지는 길이
    int result;

    scanf("%d %d %d", &a, &b, &v);

    printf("%d\n", (v-b-1) / (a-b) + 1);

    return 0;
}