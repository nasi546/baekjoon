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
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b;
	cin >> a>>b;
	vector<string> names(a + 1);
	unordered_map<string, int> s;

	for(int i = 1; i <= a; i++)
	{
		string name;
		cin >> name;
		names[i] = name;
		s[name] = i;
	
	}

	while (b--)
	{
		string fname;
		cin >> fname;
		if (isdigit(fname[0]))
		{
			int j = stoi(fname);
			cout << names[j] << '\n';
		}
		else
		{
			cout << s[fname] << '\n';
		}
	}




	return 0;
}
