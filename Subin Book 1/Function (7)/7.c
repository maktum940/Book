#include <stdio.h>
double pi = 3.14;
void my_fic()
{
    pi = 3.14159;
}

int main()
{
    printf("%0.2lf\n", pi);
    my_fic();
    printf("%0.5lf\n", pi);

    return 0;
}

