#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;




int main()
{	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a;
	cin >> a;
	
	unordered_set<string> s;
	

	for(int i = 0; i < a; i++)
	{
		string x,y;
		cin >> x>>y;
		if (y == "enter")
		{
			s.insert(x);
		}
		else
		{
			s.erase(x);
		}
	}

	vector<string> s1(s.begin(), s.end());
	sort(s1.begin(), s1.end(), greater<string>());
	for(int i=0; i <s1.size(); i++)
	{
		cout << s1.begin()[i] << '\n';
	}
	
	return 0;
}
