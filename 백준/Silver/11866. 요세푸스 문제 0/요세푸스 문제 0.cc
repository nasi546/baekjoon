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
	int a,b;
	cin >> a>>b;
	deque<int> first_a;

	for (int i = 1; i <= a; i++)
	{
		int c = i;
		first_a.push_back(c);
		
	}
	
	vector<int> result;
	result.reserve(a);
	
	while (!first_a.empty())
	{

		for (int i = 1; i < b; i++)
		{
			first_a.push_back(first_a.front());
			first_a.pop_front();
		}

		result.push_back(first_a.front());
		first_a.pop_front();
	}
	cout << "<";
	for (int i = 0; i < a; i++)
	{
		cout << result[i];
		if (i + 1 < a)
			cout << ", ";
	}
	cout << ">\n";

		return 0;
}




