#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

int main()
{
	int i = 0;
	int	j = 0;
	char arr[26];
	scanf("%s", arr);
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] >= 'A' && arr[i] <= 'C') j += 3;
		else if (arr[i] >= 'D' && arr[i] <= 'F') j += 4;
		else if (arr[i] >= 'G' && arr[i] <= 'I') j += 5;
		else if (arr[i] >= 'J' && arr[i] <= 'L') j += 6;
		else if (arr[i] >= 'M' && arr[i] <= 'O') j += 7;
		else if (arr[i] >= 'P' && arr[i] <= 'S') j += 8;
		else if (arr[i] >= 'T' && arr[i] <= 'V') j += 9;
		else if (arr[i] >= 'W' && arr[i] <= 'Z') j += 10;
	}

	printf("%d\n", j );

	return 0;
}