#include <stdio.h>

int main()
{
    int x;
    int *p = NULL;
    p = &x;
    *p = 100;
    printf("Value of *p : %d\n", *p);

    return 0;
}
