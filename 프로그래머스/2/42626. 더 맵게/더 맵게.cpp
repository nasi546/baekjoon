#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>

using namespace std;

int solution(vector<int> scoville, int K) {
    
    priority_queue<int, vector<int>, greater<int>> s;
    for(int i=0; i<scoville.size(); i++)
    {
        int x=scoville[i];
        s.push(x);
        
    }
    
    int cnt=0;
   
    while(s.size()>1&&s.top()<K)
    {   
        int sum, first, second;
        
    
            
            first=s.top();
            s.pop();
            second=s.top();
            s.pop();
          
               
            cnt++;
               
            sum = first+(second*2);
               
            s.push(sum);
            
        
    }
    
    
    if(!s.empty()&&s.top()>=K)
        return cnt;
    return -1;
}