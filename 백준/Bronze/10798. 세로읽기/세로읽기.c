#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
int main()
{
	char lanugage[5][16] = {' '};


	for (int i = 0; i < 5; i++)
	{
	
		scanf("%s", lanugage[i]);

		
	}
	


	for (int j = 0; j<15; j++)
	{

		for (int i = 0; i < 5; i++)
		{

			if (lanugage[i][j]!='\0')
			{
				printf("%c", lanugage[i][j]);
			}
		}

	}

return 0;
}