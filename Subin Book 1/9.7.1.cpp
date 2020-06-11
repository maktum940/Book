#include <stdio.h>
#include <string.h>

int main()
{
	char s[1000];
	gets(s);
	int a = strlen(s);
	puts(s);
	printf("%d", a);
}
