#include<stdio.h>
int main()
{
	char search,replace,str[128];
	int i=0;
	printf("Enter string: ");
	gets(str);
	printf("Enter a character to search: ");
	scanf(" %c",&search);
	printf("Enter a character to replace: ");
	scanf(" %c",&replace);
	while(str[i]!='\0'){
		if(str[i]==search){
			str[i]=replace;
		}
		i++;
	}
	printf("New string = %s \n", str);	
	return 0;
}
