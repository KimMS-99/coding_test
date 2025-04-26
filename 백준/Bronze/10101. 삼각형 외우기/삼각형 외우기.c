// 삼각형 외우기
int main(void)
{

    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    if (sum == 180)
    {
        if (a != b && a != c && b != c)
            printf("Scalene");
        else if (a == b && a == c)
            printf("Equilateral");
        else
            printf("Isosceles");
    }
    else
        printf("Error");
    
    return 0;
}