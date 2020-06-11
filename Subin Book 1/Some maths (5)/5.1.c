#include <stdio.h>
int main()
{
    double x, y, x_pluse_y, x_minus_y;
    printf("Enter the value of X + Y: ", x_pluse_y);
    scanf("%lf", &x_pluse_y);

    printf("Enter the value of X - Y: ", x_minus_y);
    scanf("%lf", &x_minus_y);

    x = (x_pluse_y + x_minus_y)/2;
    y = (x_pluse_y - x_minus_y)/2;

    printf("X = %0.2lf, Y = %0.2lf", x, y);

    return 0;
}
