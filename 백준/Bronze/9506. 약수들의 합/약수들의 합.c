#include <stdio.h>

int main()
{
	
	while (1)
	{
		int a;
		int b = 0;
		int count = 0;
		int arr[100001] = { 0 };
		scanf("%d", &a);
		if (a == -1)
		{
			break;
		}
		for (int i = 1; i < a; i++)
		{
			if (a % i == 0)
			{
				arr[count] = i;
				count++;
				b += i;
			}
			else
			{
				continue;
			}
		}
		if (a == b)
		{
			printf("%d = ", a);
			for (int i = 0; i < count; i++)
			{
				if (i == 0)
				{
					printf("%d", arr[0]);
				}
				else
				{
					printf(" + %d", arr[i]);
				}
			}
			printf("\n");
		}
		else
		{
			printf("%d is NOT perfect.\n", a);
		}

	



	}


return 0;
}