#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>


int main()
{
	
	
int i, j, k, l, m;
//printf("삼각형의 높이를 입력하세요: ");
scanf("%d", &k);

for (i = 0; i < k; i++)
{
	for (j = 0; j < k - i-1; j++)
	{
		printf(" ");
	}
	for (int m = 0; m < 2 * i + 1; m++)
	{
		printf("*");
	}
	printf("\n");
}
for (i = 1; i < k; i++)
{
	for (j = 0; j <i ; j++)
	{
		printf(" ");
	}

	for (int m = 0; m < 2 *(k-i)-1; m++)
	{
		printf("*");

	}
	printf("\n");
}


return 0;


}

