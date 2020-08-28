#include<stdio.h>
int main()
{
	int input,num[10],i,check=-1;
	printf("Enter 10 numbers: ");
	for(i=0; i<10; i++){
		scanf("%d",&num[i]);
	}
	printf("Number to search: ");
	scanf("%d",&input);
	for(i=0; i<10; i++){
		if(input == num[i]){
			check = i;
			break;	
		}
	}
	if(check!=-1){
		printf("Position= %d ",check+1);	
	}
	else{
		printf("Data not found");
	}

	return 0;
}
