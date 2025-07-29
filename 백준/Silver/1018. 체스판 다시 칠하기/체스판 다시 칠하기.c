#include <stdio.h>
#include <stdlib.h>

int scan( int a, int b, char arr[][51])
{
	int ws = 0;
	int bs = 0;
	for (int i = a; i < 8+a; i++)
	{
		for (int j = b; j < 8+b; j++)
		{
			char white = ((i + j) % 2 == 0) ? 'W' : 'B';
			char black = ((i + j) % 2 == 0) ? 'B' : 'W';

			if (arr[i][j] != white)
			{
				ws++;
			}
			if (arr[i][j] !=black)
			{
				bs++;
			}

		}
	}
	return (ws < bs) ? ws : bs;
}



int main()
{
	int a, b;
	char arr[51][51];
	scanf("%d%d", &a, &b);
	int min=100001; 
	int max=-100001;

	for (int i = 0; i < a; i++)
	{
		scanf("%s", arr[i]);
	}


	for (int i = 0; i <=a-8; i++)
	{
		for (int j = 0; j <= b-8; j++)
		{
			
			if((scan( i, j, arr))<min)
			{
				min = scan( i, j, arr);
			}
		}


	}

	printf("%d", min);


	return 0;
}