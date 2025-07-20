#include <stdio.h>
#include <stdlib.h>




int main()
{
	char arr[101];


	scanf("%s", &arr);
	int count = 0;



	for (int i = 0; arr[i] != '\0'; i++)
	{
		if(arr[i]=='\='|| arr[i] == '\-')
		{
			count += 0;

		}
		else if (arr[i] == 'n' && arr[i + 1] == 'j')
		{
			count++;
			i++;
		}
		else if (arr[i] == 'l' && arr[i + 1] == 'j')
		{
			count++;
			i++;
		}
		else if (arr[i] == 'd' && arr[i + 1] == 'z' && arr[i + 2] == '\=')
		{
			count++;
			i+=2;
		}
		else if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			count++;
		}
	}

	printf("%d\n", count);


	return 0;
}