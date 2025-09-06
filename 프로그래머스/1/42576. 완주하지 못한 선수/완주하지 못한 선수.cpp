#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    
    unordered_map<string, int> x; 
    
    for(int i=0; i<participant.size(); i++)
    {
        x[participant[i]]++;
    }
    for(int i=0; i<completion.size(); i++)
    {
        x[completion[i]]--;
    }
    
    
     for(auto it=x.begin(); it !=x.end(); it++)
     {
         if(it->second >0)
            return it->first;
     }
    
    
    return 0;
}