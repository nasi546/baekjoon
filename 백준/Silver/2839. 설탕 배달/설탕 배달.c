#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
	int num;
	scanf("%d", &num);
	int min = 100001;
	int count = 0;
	for (int i = 0; i <=(num / 5); i++)
	{
		for (int j = 0; j <=(num / 3); j++)
		{
			if (i * 5 + j * 3 > num)
			{
				break;
			}
			else if (i * 5 + j * 3 == num)
			{
				count = i + j;
				if (count < min)
				{
					min = count;
				}
				break;
			}
			

		}
	}

	if (count == 0)
	{
		min = -1;
	}

	printf("%d", min);

	return 0;
}