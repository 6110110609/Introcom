#include<stdio.h>
int main()
{
	int input,num[10],i,max,min;
	printf("Enter 10 numbers: ");
	for(i=0; i<10; i++){
		scanf("%d",&num[i]);
	}
	max=num[0];
	min=num[0];
	for(i=0; i<10; i++){
		if(min>num[i]){
			min=num[i];
		}
		if(max<num[i]){
			max=num[i];
		}
	}
	printf("Max = %d\n",max);
	printf("Min = %d",min);

	return 0;
}
