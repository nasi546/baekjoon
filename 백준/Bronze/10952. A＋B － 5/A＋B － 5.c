#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    int a;
    int b;

    while (1)
    {
        scanf("%d%d", &a, &b);
        if (a + b == 0)
        {
            break;
        }
        printf("%d\n", (a + b));
    }

    return 0;
}