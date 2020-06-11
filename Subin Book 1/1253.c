#include <stdio.h>
#include <string.h>

int main()
{
    while(1){
        int t, i, e, j, q;
        scanf("%d", &t);
        char a[51];
        int len;
        while(t--){
            scanf("%s", a);
            scanf("%d", &e);
            len = strlen(a);
            for(j = 26,q = 0; j <= 51; j++, q++){
                a[j] = 65 + q;
            }
            for(j = 0,q = 0; j <= 25; j++, q++){
                a[j] = 65 + q;
            }
            for(i = 26; i < len+26; i++){
                a[i] = a[i] - e;
            }
            printf("%s\n", a);
        }
    }
}
