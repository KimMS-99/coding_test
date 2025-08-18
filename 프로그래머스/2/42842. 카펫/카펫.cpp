#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int t = brown + yellow, b;
    for(int i = 2; i <= t; i++)
    {
        if(t % i == 0)
        {
            // cout << "i : " << i << ", (t / i - 2) * (i - 2) : " << (t / i - 2) * (i - 2) << "\n";
            if((t / i - 2) * (i - 2) == yellow)
            {
                answer.push_back(t / i);
                answer.push_back(i);
                break;
            }
        }
    }
    
    return answer;
}