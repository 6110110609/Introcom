#include<stdio.h>
int main()
{
	char c; //4.7
	do{
		printf("Enter grade: ");
		scanf(" %c",&c);
	}while(c<'A' || c>'E');
	printf("Grade = %c",c);
		
	return 0;
}
