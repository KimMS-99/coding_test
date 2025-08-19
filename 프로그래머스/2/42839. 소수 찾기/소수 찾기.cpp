#include <string>
#include <vector>
#include <iostream> // cout
#include <algorithm> // sort()
#include <unordered_set>

using namespace std;

void combination(const string &numbers, unordered_set<int>& us, vector<bool> &c, int ns, int a)
{
    if(ns < numbers.size())
    {
        string temp = to_string(a);
        us.insert(a);
        for(int i = 0; i < numbers.size(); i++)
        {
            if(!c[i])
                continue;
            string tt = temp + numbers[i];
            c[i] = false;
            combination(numbers, us, c, ns+1, stoi(tt));
            c[i] = true;
        }
    }
}

int solution(string numbers) {
    int answer = 0;
    string tempN = numbers;
    sort(tempN.begin(), tempN.end(), greater<char>());
    int maxnum = stoi(tempN);
    
    // cout << "tempN : " << tempN << ", maxnum : " << maxnum << endl;
    
    vector<bool> v(maxnum + 1, true);
    v[0] = false; // 0, 1은 소수가 아님
    v[1] = false;
    for(int i = 2; i * i <= maxnum; i++)
    {
        if(v[i] == true)
        {
            for(long long j = i * i; j <= maxnum; j += i)
            {
                v[j] = false;
            }
        }
    }
    
    unordered_set<int> us;
    vector<bool> c(numbers.size());
    for(int i = 0; i < numbers.size(); i++)
    {
        c[i] = false;
        for(int j = 0; j < numbers.size(); j++)
            if(i != j)
                c[j] = true;
        combination(numbers, us, c, 0, numbers[i] - '0');
    }
    
    for(auto it = us.begin(); it != us.end(); it++)
    {
        if(v[*it])
            answer++;
    }
    
    return answer;
}