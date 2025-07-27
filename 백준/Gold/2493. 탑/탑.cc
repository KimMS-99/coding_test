#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    vector<int> a(n, 0);
    stack<int> x;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        while (!x.empty() && s[x.top()] < s[i])
            x.pop();
        if (!x.empty())
        {
            a[i] = x.top() + 1;
        }
        x.push(i);
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}