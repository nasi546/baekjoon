#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main()
{
	int N;
	int M;
	scanf("%d%d", &N, &M);
	int arr[101][101];
	int arr2[101][101];
	int arr3[101][101];
		for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < M; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < M; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			arr3[i][j] = (arr[i][j] + arr2[i][j]);
		}
	}

	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < M; j++)
		{
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}



return 0;
}

