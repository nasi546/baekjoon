#include <stdio.h>

int main()
{
	while (1)
	{
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}
		if(a<b+c&&b<a+b&&c<a+b)
		{
			if (a == b && b == c)
			{
				printf("Equilateral\n");
			}
			else if (a == b || b == c || a == c)
			{
				printf("Isosceles \n");

			}
			else
				printf("Scalene\n");

		}
		else
		{
			printf("Invalid\n");

		}
	}
	return 0;
}