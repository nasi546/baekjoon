#include <stdio.h>


int main()
{
	int a, b,c;
	scanf("%d%d%d" , &a, &b, &c);
	
	int day=(c-b+(a-b-1))/(a-b);




	printf("%d", day);

	return 0;
}