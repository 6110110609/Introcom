#include<stdio.h>
int main()
{
	int A[5],B[3],C[3]={0},i,j;	//4
	printf("Assign value for A: \n");
	for(i=0; i<5; i++){
		printf("A[%d] = ",i);
		scanf("%d",&A[i]);
	}
	
	printf("Assign value for B: \n");
	for(i=0; i<3; i++){
		printf("B[%d] = ",i);
		scanf("%d",&B[i]);
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(B[i]==A[j]){
				C[i]=1;
				break;	
			}
		}
	}
	if(C[0]==1 && C[1]==1 && C[2]==1)
		printf("B is subset of A ");
	else
		printf("B is not subset of A ");

	return 0;
}
