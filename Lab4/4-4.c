#include<stdio.h>
int main()
{
	int i,input; //4.4
	printf("Enter number: ");
	scanf("%d",&input);
	for(i=1 ; i<=12 ; i++){
		printf("%d x %d = %d\n",input,i,input*i);
	}
	
	return 0;
}
