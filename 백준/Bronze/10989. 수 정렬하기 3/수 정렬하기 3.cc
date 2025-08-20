#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




int main()
{	
	
	
	int a;
	cin >> a;

	static int arr[10001] = { 0 };

	for(int i = 0; i < a; ++i)
	{
		int x;
		cin >> x;
		++arr[x];
	}

	for (int i = 1; i <=10000; ++i)
	{
		while(arr[i]--)
		{
			cout << i << '\n';
		}
		
	}
	return 0;
}
