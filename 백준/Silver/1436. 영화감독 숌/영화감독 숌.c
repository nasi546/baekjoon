#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
	int num; 
	scanf("%d", &num);
	
	int count = 0; 
	int cnum = 666;

	while (1)
	{
		char a[20];
		sprintf(a, "%d", cnum);

		if (strstr(a, "666") != NULL)
		{
			count++;
			if (count == num)
			{
				printf("%d\n", cnum);
				break;
			}

		}
		cnum++;
	}


	return 0;
}