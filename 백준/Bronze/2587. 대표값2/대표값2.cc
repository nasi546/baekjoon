#include <iostream>
using namespace std;




int main()
{
	int arr[5];
	int b;
	int sum, middle;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				b = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = b;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}

	cout << sum/5 << endl;
	cout << arr[2] << endl;


	return 0;
}