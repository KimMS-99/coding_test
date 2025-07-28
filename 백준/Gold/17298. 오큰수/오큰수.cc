#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> answer(n, -1);
    vector<int> a(n); // 수열 원소 입력
    stack<int> index; // 인덱스 저장
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        while (!index.empty())
        {
            // cout << answer[index.top()] << " " << index.top() << endl;
            if (a[index.top()] >= a[i])
                break;
            answer[index.top()] = a[i];
            index.pop();
        }
        index.push(i);
    }

    vector<int>::iterator it;
    for (it = answer.begin(); it != answer.end(); it++)
        cout << *it << " ";
    cout << endl;
    return 0;
}