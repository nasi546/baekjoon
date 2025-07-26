#include <stdio.h>

int main()
{
	int a, b,c,d;
	scanf("%d%d%d%d", &a, &b,&c,&d);

	int e = a;

	if (e > c - a)
	{
		e = c - a;
	}
	if (e > b)
	{
		e = b;
	}
	if (e > d - b)
	{
		e = d - b;
	}
	printf("%d", e);

	return 0;
}