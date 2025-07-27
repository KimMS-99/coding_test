#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n, x = 0;
    long long result = 0;
    cin >> n; // 개수 입력
    vector<int> h(n);
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i]; // 높이 입력
        while (!s.empty() && h[s.top()] <= h[i])
        {
            s.pop();
            x++;
        }
        if (!s.empty())
            result += i - x;
        else
            x = i;
        s.push(i);
    }

    cout << result << endl;

    return 0;
}