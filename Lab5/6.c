#include<stdio.h>
int main()
{
	char str[128];
	int i=0,check=0;
	printf("Enter string: ");
	gets(str);
	while(str[i]!='\0'){
		if(str[i]=='a'){
			check = 1;
		}
		i++;
	}
	if(check==1){
		printf("Good");
	}
	else
		printf("Not good");

	return 0;
}
