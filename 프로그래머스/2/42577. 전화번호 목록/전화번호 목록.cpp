#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool solution(vector<string> phone_book) {
    
    unordered_set<string> s;
    for(int i=0; i< phone_book.size(); i++)
    {
        string x;
        x=phone_book[i];
        s.insert(x);
    }
    
    
for(int i=0; i<phone_book.size();i++)
{
string a = phone_book[i];
        for(int j =1; j <a.size(); j++)
        {   
        string y;
        y=a.substr(0,j);
        auto it = s.find(y);
         if(it!= s.end())
        {
        
        return false;
        }
    
    
        }   
  
            
}
        
    
  
    return true;
}