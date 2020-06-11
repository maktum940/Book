#include <stdio.h>

int main()
{
    int num1, num2, value;
    char sign;


    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("PLease enter another number: ");
    scanf("%d", &num2);

    sign = '+';
    value = num1 + num2;
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    sign = '-';
    value = num1 - num2;
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    sign = '*';
    value = num1 * num2;
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    sign = '/';
    value = num1 /num2;
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    return 0;

}
