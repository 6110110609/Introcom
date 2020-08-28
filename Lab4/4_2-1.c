#include<stdio.h>
int main()
{
	int i,sum=0,input,a; //4.2.1
	printf("Enter an integer: ");
	scanf("%d",&input);
	printf("Enter %d integer: ",input);
	for(i=0 ; i< input ; i++){
		scanf("%d",&a);
		sum += a;
	}
	printf("Sum of integer = %d",sum);
		
	return 0;
}
