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
	cin >> a>> b;
	int c = 0;
	vector<string> s(a);
	vector<string> s1(b);
	for (int i = 0; i < a; i++)
	{
		cin >> s[i];
	}

	for (int i = 0; i < b; i++)
	{
		cin >> s1[i];
	}

	sort(s.begin(), s.end());
	sort(s1.begin(), s1.end());

	vector<string> v;

	for (int i = 0; i < b; i++)
	{
		auto d = lower_bound(s.begin(), s.end(), s1[i]);

		
		if (d != s.end() && *d == s1[i])
		{
          v.push_back(*d);
			c++;
		}
	}

	cout << c << '\n';

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << '\n';

	}
	


	return 0;
}