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
	int a;
	cin >> a;
	queue<int> b;
	for (int i = 1; i <= a; i++)
	{
		int c;
			c	= i;
		b.push(c);

	}

	for (int i = 0;i <a; i++)
	{
		if (b.size()>1)
		{
			
			b.pop();
			b.push(b.front());
			b.pop();

		}
		else
		break;

	}

	cout << b.front() << '\n';

	return 0;
}
