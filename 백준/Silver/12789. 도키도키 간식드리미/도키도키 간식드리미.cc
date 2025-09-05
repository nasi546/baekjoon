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
	int a;
	cin >> a;
	deque<int> b;
	stack<int> c;
	int d = 1;
	int f = 0;
	int g = 0;
	for (int i = 0; i < a; i++)
	{
		int e;
		cin >> e;
		b.push_back(e);
	}
	
	for (int i = 0; i < a; i++) 
	{
		int x = b.front();
		b.pop_front();

		if (x == d) 
		{
			d++;
			for(; !c.empty() && c.top() == d; c.pop(), d++) {}
		}
		 else 
		{
				c.push(x);
		}
	}
		for (; !c.empty() && c.top() == d; c.pop(), d++)
		{
		
		}

		if (d == a + 1)
			cout << "Nice\n";
		else
			cout << "Sad\n";

		return 0;
}