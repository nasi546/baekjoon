#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;




int main()
{
	
	int a, b;
	cin >> a>> b;

	vector<int> num(a+b);
	
	for (int i = 0; i < a + b; i++)
	{
		cin >> num[i];
	}
	
	unordered_map<int, int> c;
	for (int i : num)
	{
		c[i]++;
	}
	vector<int> e;
	for (auto& d : c)
	{
		if (d.second == 1)
		{
			e.push_back(d.first);
		}
	}

	cout << e.size() << '\n';

	return 0;
}
