#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    for(int i=0; i<arr.size(); i++)
    {
        int a=arr[i];
        answer.push_back(a);
    }
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    
    return answer;
}