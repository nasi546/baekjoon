#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




int main()
{	int a;
	cin >> a;
	
	vector<int> v1;
	vector<int> v2;
	for(int i = 0; i < a; i++)
	{
		int x;
		cin >> x;
		v1.push_back(x);

	}
	int b;
	cin >> b;

	for(int i = 0; i < b; i++)
	{
		int x;
		cin >> x;
		v2.push_back(x);
	}

	sort(v1.begin(), v1.end());


	for(int i=0; i <v2.size(); i++)
	{
		auto c = lower_bound(v1.begin(), v1.end(), v2[i]);
		if(c != v1.end() && *c==v2[i])
			cout << 1 << ' ';
		else
		{
			cout << 0 << ' ';
		}
	}
	return 0;
}