#include <stdio.h>

int main()
{
	
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
	
		
		if(a>=b+c)
		{
			printf("%d", ((b + c)*2)-1);
		}
		else if(b>=a+c)
		{
			printf("%d", ((a + c) * 2) - 1);
		}
		else if (c >= a + b)
		{
			printf("%d", ((a + b) * 2) - 1);
		}
		else
		{
			printf("%d", a + b + c);

		}


	return 0;
}