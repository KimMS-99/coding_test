#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<int, int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back({b, c});
    }

    sort(v.begin(), v.end());
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        if (!pq.empty() && v[i].first >= pq.top())
        {
            pq.pop();
        }
        pq.push(v[i].second);
    }

    cout << pq.size();

    return 0;
}