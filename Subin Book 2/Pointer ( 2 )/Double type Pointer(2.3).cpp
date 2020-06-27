#include <stdio.h>

int main()
{
    double pi = 3.14159265358;

    int *prt;

    prt = &pi;

    printf("Value of pi : %lf\n", pi);
    printf("Value of pi : %lf\n", *prt);

    return 0;
}
