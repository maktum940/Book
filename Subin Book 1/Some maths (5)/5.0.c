#include<stdio.h>

int main()
{
    double a1, a2, b1, b2, c1, c2, X, Y;
    printf("a1 =");
    scanf("%lf", &a1);
    printf("a2 =");
    scanf("%lf", &a2);
    printf("b1 =");
    scanf("%lf", &b1);
    printf("b2 =");
    scanf("%lf", &b2);
    printf("c1 =");
    scanf("%lf", &c1);
    printf("c2 =");
    scanf("%lf", &c2);

    X = (b2*c1-b1*c2)/(a1*b2-a2*b1);
    Y = (a1*c2-a2*c1)/(a1*b2-a2*b1);

    printf("X = %0.2lf, Y = %0.2lf\n", X, Y);

    return 0;
}
