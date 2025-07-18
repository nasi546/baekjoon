#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



int main()
{
    int T;
    scanf("%d", &T);
    int a;
    int b;

    for (int i = 0; i < T; i++)
    {
        scanf("%d%d", &a, &b);
        printf("%d\n", (a + b));
   }

    return 0;
}