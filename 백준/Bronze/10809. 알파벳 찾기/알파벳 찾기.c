#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    int i=0;
    int j=0;
    char arr[101] = {};
    int temp[26];

      for (int j = 0; j < 26; j++)
        {
            temp[j] = -1;
        }
      scanf("%s", arr);


    for (i = 0; arr[i] != '\0'; i++)
    {
        int b = arr[i] - 'a';
        if (temp[b] == -1)
        {
            temp[b] = i;
        }

    }

  
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", temp[i]);

    }

    return 0;
}