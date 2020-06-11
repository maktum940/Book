#include<stdio.h>
int main()
{
    int b, p, q, r;

    scanf("%d %d", &b, &p);

    q = p/b;
    r = p-(b*q);

    printf("Reminder is: %d",r);

    return 0;
}
