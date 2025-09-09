#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    
    int a=0;
    stack<char> x;
	for (int i = 0; i<s.size(); i++)
		{
			if (s[i] == '(')
			{
				x.push(s[i]);
			}
			
			else if (s[i] == ')')
			{
				if (x.empty()||x.top()!='(')
				{
					a=1;
					break;
					
				}
				else
					x.pop();
			}
			

		
		}
if(a==1)
{
    return false;
}
else if(!x.empty())
    return false;
else
    return true;
}