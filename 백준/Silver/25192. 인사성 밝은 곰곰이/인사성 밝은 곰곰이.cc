#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{


	int n;
	cin >> n;

	int count = 0;
	set<string> check;  

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		if (s == "ENTER")
		{
			check.clear();
		}
		else
		{
			auto result = check.insert(s); 
			if (result.second)   
			{
				count++;
			}
		}
	}

	cout << count << "\n";
	return 0;
}
