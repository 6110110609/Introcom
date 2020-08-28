#include<stdio.h>
int main()
{
	int num[3][2],i,j;	//1
	printf("Enter 6 numbers: ");
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			scanf("%d ",&num[i][j]);
		}
	}
	printf("Your input is: \n");
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}

	return 0;
}
