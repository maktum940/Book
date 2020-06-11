#include <stdio.h>
int main()
{
    double f, c;
    printf("Enter the temperature in celsius:");
    scanf("%lf", &c);

    f=(c*1.8)+32;
    printf("Temperature in farenheit is:%0.2lf\n", f);

    return 0;
}
