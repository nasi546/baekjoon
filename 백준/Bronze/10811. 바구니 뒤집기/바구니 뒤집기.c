#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>





void swap(int* pa,int *pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;

	
}



void swap1(int *arr, int a, int b)
{
	while (a < b)
	{
		swap(&arr[a], &arr[b]);
			a++;
			b--;

	}

}





int main()
{
	int a, b;
	int m;
	int n;
	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int) * n);
	scanf("%d", &m);

	for (int i = 0; i < n; i++)
	{
		arr[i] = i+1;
	}

	
	for (int i = 0; i < m; i++)
	{
		
		scanf("%d %d", &a, &b);

		swap1(arr, a-1, b-1);



	}





	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

