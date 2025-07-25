#include <stdio.h>

int count(int a)
{
	if (a < 2)
	{

		return 0;
	}
	for (int i = 2; i * i <= a; i++)
	{

		if (a % i == 0)
		{
			return 0;

		}
	}

	return 1;


}



int main()
{
	int a,b;
	int sum = 0;
	int arr[10000] = { 0 };
	int c = 0;

	scanf("%d%d", &a,&b);

	for (int i = a; i <=b; i++)
	{
		if (count(i) == 1)
		{
			sum += i;
			arr[c] = i;
			c++;
		}
	}
	if (c == 0)
	{
		printf("%d", -1);
	}
	else
	{
		printf("%d\n", sum);

		printf("%d\n", arr[0]);
	}
	return 0;
}