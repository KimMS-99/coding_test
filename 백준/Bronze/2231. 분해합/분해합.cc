#include <iostream>

using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int temp = i;
        int ttemp = 0;
        for (; temp; temp /= 10)
        {

            ttemp += temp % 10;
        }
        ttemp += i;
        if (ttemp == n)
        {
            result = i;
            break;
        }
    }
    cout << result << endl;
}