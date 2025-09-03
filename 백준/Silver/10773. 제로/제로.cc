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
	int b = 0;
	deque<int> s;
	for (int i = 0; i < a; i++)
	{
		int x;
		cin >> x;
		if (x == 0)
		{
			s.pop_back();
		}
		else
			s.push_back(x);

	}
	
	for (int i = 0;i <size(s); i++)
	{
		b += s[i];
	}


	cout << b << '\n';
	return 0;
}
