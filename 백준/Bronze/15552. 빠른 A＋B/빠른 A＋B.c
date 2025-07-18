#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



int main()
{
    unsigned int T;
    scanf("%d", &T);
    unsigned int a;
    unsigned int b;

    for (unsigned int i = 0; i < T; i++)
    {
        scanf("%d%d", &a, &b);
        printf("%d\n", (unsigned)(a + b));
   }

    return 0;
}