#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
	
int main()
{
	int num;
	int bigsquare[100][100] = { 0 };
	int count = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		int a, b;

		scanf("%d%d", &a, &b);
		for (int j = a; j < 10+a; j++)
		{
			for (int k = b; k < 10+b; k++)
			{
				if (bigsquare[j][k] == 1)
				{
					continue;
				}
				else
				bigsquare[j][k] = 1;
				
			}
		}
	}

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (bigsquare[i][j] == 1)
			{
				count += 1;
			}
		}
	}

	printf("%d", count);

	return 0;
}