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
	queue<int> b;
	for (int i = 0; i < a; i++)
	{
		string x;
		cin >> x;

		if (x == "push")
		{
			int y;
			cin >> y;
			b.push(y);

		}
		else if (x == "pop")
		{
			if (b.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << b.front() << '\n';
				b.pop();
			}
		}
		else if (x == "size")
		{
			cout << b.size() << '\n';
		}
		else if (x == "empty")
		{
			if (b.empty())
			{
				cout << 1 << '\n';
			}
			else
				cout << 0 << '\n';

		}
		else if (x == "front")
		{
			if (b.empty())
			{
				cout << -1 << '\n';
			}
			else
			cout << b.front() << '\n';

		}
		else if (x == "back")
		{
			if (b.empty())
			{
				cout << -1 << '\n';
			}
			else
			cout << b.back() << '\n';


		}



	}

	return 0;
}