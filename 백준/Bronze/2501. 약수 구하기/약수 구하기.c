#include <stdio.h>

int main()
{
	int a, b;
	int arr[10001] = { 0 };
	int count = 0;

	scanf("%d%d", &a, &b);
	
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			arr[0 + count] = i;
			count++;
		}
		else
		{
			continue;
		}
	}

	printf("%d", arr[b-1]);


return 0;
}