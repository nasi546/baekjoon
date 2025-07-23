#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

int main()
{

	int coin[4] = { 25, 10, 5, 1 };
	int money[4] = { 0 };
	int doller = 0;
	int num;

	scanf("%d", &num);

	for (int j = 0; j < num; j++)
	{
		scanf("%d", &doller);

		for (int i = 0; i < 4; i++)
		{
			
			money[i] = doller / coin[i];
			doller = doller % coin[i];
				
		}

		for (int i = 0; i < 4; i++)
		{

			printf("%d ", money[i]);

		}
		printf("\n");

	}
	

	return 0;
}