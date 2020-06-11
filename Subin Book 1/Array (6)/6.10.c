#include<stdio.h>
int main()
{
    int i, j, a;
    int total_marks[11];
    int marks_count[11];
    for(a = 0; a < 11; a++){
        scanf("%d", &total_marks[a]);
    }
    for(i = 0; i < 11; i++){
        marks_count[i] = 0;
    }
    for(i= 0; i < 12; i++){
        marks_count[total_marks[i]]++;
        for(j = 0; j <= 10; j++){
            printf("%d ", marks_count[j]);
        }
        printf("\n");
    }
    return 0;
}
