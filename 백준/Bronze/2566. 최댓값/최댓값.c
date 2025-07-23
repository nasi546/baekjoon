#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

int main()
{
	int row=0, cow=0;
	int maxnum = -1;
	int arr[9][9];

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}


	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (maxnum < arr[i][j])
			{
				maxnum = arr[i][j];
				row = i+1;
				cow = j+1;
			}


		}
	}

	printf("%d\n", maxnum);
	printf("%d %d\n", row, cow);


return 0;
}