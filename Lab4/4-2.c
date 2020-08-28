#include<stdio.h>
int main()
{
	int i,j,count=1; //4.2
	for(i=0 ; i<3 ;i++){
		for(j=0 ; j<10 ;j++){
			printf("%d ",count);
			count++;
		}
		printf("\n");
	}
}
