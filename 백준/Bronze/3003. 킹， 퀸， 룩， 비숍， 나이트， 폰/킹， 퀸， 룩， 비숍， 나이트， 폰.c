#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

int main()
{
	int arr[6] = { 1,1,2,2,2,8 };
	int arra[6] = {};
	int count[6];
	scanf("%d%d%d%d%d%d", &arra[0], &arra[1], &arra[2], &arra[3], &arra[4], &arra[5]);

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] != arra[i])
		{

			count[i] = (arr[i] - arra[i]);

		}
		else if (arr[i] == arra[i])
		{
			count[i] = 0;
		}

		

	}

	printf("%d %d %d %d %d %d ", count[0], count[1], count[2], count[3], count[4], count[5] );

	return 0;
}