#include<stdio.h>
int main()
{
    double a, p, n, r, i, d;
    printf("Enter the amount of loan ");
    scanf("%lf", &p);
    printf("Enter the interest rate ");
    scanf("%lf", &d);
    printf("Number of year:");
    scanf("%lf", &n);

    r = d/100;
    i = p*n*r;
    a = p+i;

    printf("Total amount: %0.2lf", a);

    return 0;
}
