#include <stdio.h>
#include <string.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        char input[51];
        int right_shift;
        scanf("%s", input);
        scanf("%d", &right_shift);
        int j, len = strlen(input);
        for(j = 0; j < len; j++){
            char c = input[j] - right_shift;
            if(c < 65){
                c = c + 26;
            }
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}
