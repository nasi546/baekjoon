#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
	int a, b, c, d, e, f;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	int x=0;
	int y=0;
	int countx = 0;
	int county = 0;
	for (int i = -999; i <= 999; i++)
	{

		for (int j = -999; j <= 999; j++)
		{

			if (a * i + b * j == c)
			{
				x = i;
				y = j;
				if (d * x + e * y == f)
				{
					countx = x;
					county = y;
				}
			}

		}


	}

	printf("%d %d", countx, county);


	return 0;
}