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
	deque<int> s;
	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;
		if (b == 1)
		{
			int x;
			cin >> x;
			s.push_front(x);
		}
		else if (b == 2)
		{
			int x;
			cin >> x;
			s.push_back(x);
		}
		else if (b == 3)
		{
			if (!s.empty())
			{
				cout << s.front() << '\n';
				s.pop_front();
			
				
			}
			else
				cout << -1<<'\n';
		}
		else if (b == 4)
		{
			if (!s.empty())
			{
				cout << s.back() << '\n';
				s.pop_back();
				
			}
			else
				cout << -1 << '\n';
		}
		else if (b == 5)
		{
			cout << s.size() << '\n';
		}
		else if (b == 6)
		{
			if (s.empty())
			{
				cout << 1 << '\n';
			}
			else
				cout << 0 << '\n';
		}
		else if (b == 7)
		{
			if (!s.empty())
			{
				cout << s.front() << '\n';
			}
			else
				cout << -1 << '\n';
		}
		else if (b == 8)
		{
			if (!s.empty())
			{
				cout << s.back() << '\n';
			}
			else
				cout << -1 << '\n';
		}



	}

	return 0;
}


