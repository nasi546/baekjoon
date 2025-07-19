#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>


int main()
{

	int arr[30];
	int arra[28];
	for (int i = 0; i < 30; i++)
	{
		arr[i] = (i + 1);

	}


	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &arra[i]);

	}

	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 28; j++)
		{
			if (arr[i] == arra[j])
			{
				arr[i] = 0;
				break;
			}
		}

	}

	for (int i = 0; i < 30; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d\n", arr[i]);
		}
	}

	return 0;
}