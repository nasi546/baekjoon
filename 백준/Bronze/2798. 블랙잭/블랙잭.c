#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int max=0;
	int min=0;
	int arr[101];
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < a-2; i++)
	{
		for (int j = i+1; j < a-1; j++)
		{
			for (int k = j+1; k < a; k++)
			{
				if (arr[i] + arr[j] + arr[k] <= b)
				{
					min=(arr[i] + arr[j] + arr[k]);
					if (min > max)
						max = min;
				}
			}
		}
	}

	printf("%d", max);


	return 0;
}