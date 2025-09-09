#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> result; 
    int z=1;
    for(int i=0; i<speeds.size(); i++)
    {
        int x= 100-progresses[i];
        int y=(x/speeds[i]);
        if(x%speeds[i]!=0)
        {
            y++;
        }
        result.push_back(y);
    }
    
    int cnt=result[0];
    int resultcount=1;
    for(int i=1; i<result.size(); i++)
    {
    
            if(result[i]<=cnt)
             {
                resultcount++;
            }
            else
            {
                answer.push_back(resultcount);
                cnt=result[i];
                resultcount=1;
            }
        
        

        
        
        
    }
    answer.push_back(resultcount);
    
    return answer;
}