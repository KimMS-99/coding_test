#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i < n * n; i++)
    {
        int nn;
        cin >> nn;
        if (q.size() < n)
        {
            q.push(nn);
        }
        else if (q.top() < nn)
        {
            q.pop();
            q.push(nn);
        }
    }

    cout << q.top() << endl;

    return 0;
}
