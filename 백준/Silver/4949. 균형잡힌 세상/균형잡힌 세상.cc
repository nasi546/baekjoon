#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>
#include <stack>
#include <deque>
using namespace std;



int main()
{
	

	while (1)
	{
		string b;
		getline(cin, b);

		stack<char> s;
		int a = 0;

		if (b == ".")
		{
			break;
		}

		for (int i = 0; i<b.size(); i++)
		{
			if (b[i] == '(' || b[i] == '[')
			{
				s.push(b[i]);
			}
			
			else if (b[i] == ')')
			{
				if (s.empty()||s.top()!='(')
				{
					a=1;
					break;
					
				}
				else
					s.pop();
			}
			else if (b[i] == ']' )
			{
				if (s.empty() || s.top() != '[')
				{
					a=1;
					break;
				}
				else
					s.pop();
			}
				

		
		}
		if(a==0&&s.empty())
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
		


	}
	return 0;
}
