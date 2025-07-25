#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	int c = 2;
	while (1)
	{
		if (a % c == 0)
		{
			a = (a / c);
			printf("%d\n", c);
		}
		else if(a%c!=0)
		{
			if (c >= a)
			{
				break;
			}
			c++;
		}

		
	}

	return 0;
}