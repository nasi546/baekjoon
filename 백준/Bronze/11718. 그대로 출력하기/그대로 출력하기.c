#include <stdio.h>

int main()
{

    char a[101];
    while (fgets(a, sizeof(a), stdin) != NULL) 
    {
        printf("%s", a);
    }

    return 0;
   
}