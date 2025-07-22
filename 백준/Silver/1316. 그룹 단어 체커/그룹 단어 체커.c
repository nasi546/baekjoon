#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

int scan(const char* n)
{
	int a[26] = { 0 };
	char b = '\0';
	for (int i = 0; n[i] != '\0'; i++)
	{
		char c = n[i];

		if (c != b)
		{
			if (a[c - 'a'] == 1)
			{
				return 0;
			}
			a[c - 'a'] = 1;
			b = c;
		}
	}
	return 1;
}


int main()
{
	int num;
	scanf("%d", &num);
	int count = 0;
	char N[101];
	for (int i = 0; i < num; i++)
	{
		scanf("%s", N);


		count += scan(N);

	}

	printf("%d\n", count);


return 0;
}


	