#include<stdio.h>
int main()
{
	int i,j,input,w,sum=0; //4.2.2
	printf("Enter an integer: ");
	scanf("%d",&input);
	do{
		sum+=input%10;
		input/=10;
	}while(input!=0);
	printf("%d",sum);
		
	return 0;
}
