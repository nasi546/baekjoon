#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>
#include <stack>
#include <deque>
#include <queue>
using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a; 
	cin >> a;

	stack<int> x;
	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;

		if (b == 1)
		{
			cin >> b;
			x.push(b);
		}
		else if (b == 2)
		{
			if (x.size() > 0)
			{
				cout << x.top()<<"\n";
				x.pop();
			}
			else
				cout << "-1\n";
		}
		else if (b == 3)
		{
			cout << x.size() << '\n';
		}
		else if (b == 4)
		{
			if(x.size()==0)
				cout<< "1\n";
			else
				cout << "0\n";
		}
		else if(b==5)
		{
			if (x.size() > 0)
			{
				cout << x.top() << '\n';
			}
			else
			{
				cout << "-1\n";
			}
		}
	}

	return 0;
}