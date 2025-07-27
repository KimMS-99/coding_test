#include <string>
#include <vector>
#include <iostream> 
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    int t;
    for(int i = 0; i < progresses.size(); i++)
        q.push((100 - progresses[i] + speeds[i] - 1) / speeds[i]);
    while(!q.empty())
    {
        int a = 1;
        t = q.front();
        q.pop();
        while(!q.empty() && t >= q.front())
        {
            q.pop();
            a++;
        }
        answer.push_back(a);
    }
    return answer;
}