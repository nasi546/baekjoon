#include <stdio.h>

int main()
{

	int a, b;
	scanf("%d%d", &a, &b);
	int c;
	scanf("%d", &c);
	int d;
	scanf("%d", &d);


	if (a<=c&&(a-c)*d+b<=0)
	{
		printf("1");
	}
	else 
		printf("0");

	return 0;
}