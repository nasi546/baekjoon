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
	int a;
	cin >> a;
	vector<int> v(a);

	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;
		v[i] = b;
	}

	int c;
	cin >> c;

	vector<int> v1(c);

	for (int i = 0; i < c; i++)
	{
		int d;
		cin >> d;
		v1[i] = d;
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < c; i++)
	{
		int e=lower_bound(v.begin(), v.end(), v1[i]) - v.begin();
		int f = upper_bound(v.begin(), v.end(), v1[i]) - v.begin();
		cout << f-e << ' ';
	}

	return 0;
}
