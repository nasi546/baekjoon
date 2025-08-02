
#include <iostream>
using namespace std;




int main()
{
	int arr[1001] = { 0 };
	int a;
	int b;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < a-1; i++)
	{
		for (int j = 0; j < a-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				b = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = b;
			}
		}
	}

	for (int i = 0; i<a; i++)
	{
		
		
			cout << arr[i] << endl;
		
		
	}


	return 0;
}