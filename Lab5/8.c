#include<stdio.h>
int main()
{
	int input,num[10],i,count=0;
	float aver=0;
	printf("Enter 10 numbers: ");
	for(i=0; i<10; i++){
		scanf("%d",&num[i]);
		aver=aver+num[i];
	}
	aver = aver /10;
	printf("Average= %.1f\n",aver);
	printf(">");
	for(i=0; i<10; i++){
		if(num[i]>aver){
			printf("%d ",num[i]);
			count++;
		}
	}
	printf("\nCount=%d",count);

	return 0;
}
