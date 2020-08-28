#include<stdio.h>
int main()
{
	char str[128];
	int i=0,count=1;
	printf("Enter text: ");
	gets(str);
	while(str[i]!=0){
		if(str[i]==' '){
			count++;
		}
		i++;
	}
	printf("Word count= %d",count);	

	return 0;
}
