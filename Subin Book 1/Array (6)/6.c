#include<stdio.h>
int main()
{
    int ft_marks, st_marks, final_marks;
    double totul_marks;
    scanf("%d %d %d", &ft_marks, &st_marks, &final_marks);

    totul_marks = ft_marks*0.25 + st_marks*0.25 + final_marks*0.5;

    printf("%0.0lf\n", totul_marks);

    return 0;
}
