#include <stdio.h>

int main()
{
    int number, x, y;
    scanf("%d", &number);

    x = number / 2;
    y = (x * 2)- number;

    if (y == 0){
        printf("The number is even\n");
    }
    else {
        printf("The number is odd\n");
    }

    return 0;
}
