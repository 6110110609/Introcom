#include<stdio.h>
int main()
{
	char character;
 	int index, len;
	char string[20+1];
	printf("Enter text: ");
	scanf("%s",string);
	index=0;
	while(string[index] != '\0')
	{
		index++; }
		len=index;
	for(index=0; index<len; index++)
	{
		if(string[index]>='a' && string[index]<='z')
			string[index]= string[index] - ('a'-'A');
	}
	printf("New string = %s \n", string); 

	return 0;
}
