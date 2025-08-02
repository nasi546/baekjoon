
#include <iostream>
using namespace std;




int main()
{
	int arr[1001];
	int a; 
	cin >> a;
	int c;
	cin >> c;

	int b;

	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i <a-1; i++)
	{
		for (int j = 0; j < a-1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				b = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = b;
			}
		}
	}

	cout << arr[c-1] << endl;


	return 0;
}