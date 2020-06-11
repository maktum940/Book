#include<stdio.h>
#include<math.h>
int main()
{
    double r, a;
    printf("Give me the length of R: ");
    scanf("%lf", &r);

    a = 3.1416*(pow(r,2));
    printf("The area of circle is :%0.2lf", a);
    return 0;
}
