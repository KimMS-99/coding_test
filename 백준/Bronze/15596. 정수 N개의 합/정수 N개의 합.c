long long sum(int *a, int n)
{

    long long int sum_result = 0;

    for (int i = 0; i < n; i++)
        sum_result += a[i];
    
    return sum_result;
}