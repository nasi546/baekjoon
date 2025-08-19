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
		v2.push_back(x);
	}
	sort(v1.begin(), v1.end());
	v1.erase(unique(v1.begin(), v1.end()), v1.end());



	for(int i=0; i <v2.size(); i++)
	{
		int c = lower_bound(v1.begin(), v1.end(), v2[i]) - v1.begin();
		cout << c << ' ';
	}
	return 0;
}