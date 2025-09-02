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
	int b = 0;

	string s;
	cin >> s;

	unordered_set<string> s2;

	for (int i = 0; i < s.size(); i++)
	{
		string temp = "";
		for (int j = i; j < s.size(); j++)
		{
			temp += s[j];
			s2.insert(temp);
		}
	}

	
	
	cout << s2.size() << '\n';

	return 0;
}