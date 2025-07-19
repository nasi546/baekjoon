#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>


void swap(int* pa, int* pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main()
{

	int arr[10];
	int arra[10];
	int count = 1;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		arra[i] = (arr[i] % 42);
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (arra[j] > arra[j + 1])
			{
				swap(&arra[j], &arra[j + 1]);
			}

		}

	}

	for (int i = 1; i < 10; i++)
	{
		if (arra[i] != arra[i - 1])//옆에 값이랑 그냥 비교해서 같지 않으면 플러스
		{
			count++;
		}


	}


	printf("%d\n", count);

	return 0;
}