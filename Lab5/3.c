#include<stdio.h>
int main()
{
	int i=0;
	char c[128];
	printf("Enter string: ");
	gets(c);
	while(c[i]!='\0'){
		printf("%c\n",c[i]);
		i++;
	}

	return 0;
}
