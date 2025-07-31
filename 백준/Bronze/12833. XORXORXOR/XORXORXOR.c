#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main()
{
	int a,b,c;
	

	scanf("%d%d%d", &a, &b, &c);
	int d = a ^ b;
	int sum = d;
	while ((c-1)%2 >0)
	{
		sum = sum ^ b;


		c--;
		}
	
	printf("%d", sum);

	
	return 0;
}