#include<stdio.h>
int main()
{
	int num1[10]={1,2,3,4,5,6,7,8,9,10},num2[10],i;
	printf("First array=  ");
	for(i=0; i<10; i++){
		printf("%d ",num1[i]);
		num2[i]=num1[i]*num1[i];
	}
	printf("\nSecond array=  ");
	for(i=0; i<10; i++){
		printf("%d ",num2[i]);
	}

	return 0;
}
