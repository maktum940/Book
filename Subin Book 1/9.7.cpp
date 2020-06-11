int string_compare(char a[], char b[])
{
	int i, j;
	for(i = 0; a[i] != '\0' && b[i] != '\0'; i++){
		if(a[i] < b[i]){
			return -1;
		}
		if(a[i] > b[i]){
			return 1;
		}
	}
	if(string_lenth(a) == string_lenth(b)){
		return 0;
	}
	if(string_lenth(a) < string_lenth(b)){
		return -1;
	}
	if(string_lenth(a) > string_lenth(b)){
		return 1;
	}
}
int main()
{
	char a[100], b[100];
	scanf("%s %s", a, b);
	int com = string_compare(char a[], char b[]);
	printf("%d", com);
}
