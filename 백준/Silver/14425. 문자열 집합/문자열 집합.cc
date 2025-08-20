#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




int main()
{	int a,b;
	cin >> a>>b;
	int c = 0;
	vector<string> s1;
	vector<string> s2;
	s1.reserve(10000);
	s2.reserve(10000);

	for(int i = 0; i < a; i++)
	{
		string x;
		cin >> x;
		s1.push_back(x);

	}
	
	for(int i = 0; i < b; i++)
	{
		string x;
		cin >> x;
		s2.push_back(x);
	}

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());


	for(int i=0; i <s2.size(); i++)
	{
		auto d = lower_bound(s1.begin(), s1.end(), s2[i]);
		if (d != s1.end() && *d == s2[i])
			c++;
		else
			continue;
	}
 	cout << c << '\n';
	return 0;
}