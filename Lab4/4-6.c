#include<stdio.h>
int main()
{
	int w,sum=0; //4.6
	while(sum<400){
			printf("Enter weight: ");
			scanf("%d",&w);
			sum += w;
			
	}
	printf("%d\n",sum);
	printf("Overload!!");
	
	return 0;
}
