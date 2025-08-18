#include <iostream>
#include <vector>
#include <algorithm>
#include <utility> 
#include <string>
using namespace std;




int main()
{	int a;
	cin >> a;

	vector<pair<int, string>> v;

	
	v.reserve(a); 


	for (int i = 0; i < a; i++)
	{
		int age;
		string name;
		cin >> age >> name;
		v.emplace_back(age, name);
	}

	stable_sort(v.begin(), v.end(), [](const auto& A, const auto& B)
		{
			return A.first < B.first;
		});
		
	for(const auto& [age, name] : v)
	{
		cout << age << ' ' << name<<'\n';
	}
	return 0;
}