#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    long long n, result = 0, x = 0;
    cin >> n; // 개수 입력
    vector<long long> b(n);
    stack<long long> s;
    for (long long i = 0; i < n; i++)
    {
        long long t = 0;
        cin >> b[i]; // 10 3 7 4 12 2
        while (!s.empty() && b[s.top()] <= b[i])
        {
            s.pop();
            x++;
        }
        if (!s.empty())
            result += i - x;
        else
            x = i;
        s.push(i);
        // printf("\ns.top() : %d, b[s.top()] : %d, b[%d] : %d, x : %d, s.size() : %d\n", s.top(), b[s.top()], i, b[i], x, (int)s.size());
    }

    cout << result << endl;

    return 0;
}