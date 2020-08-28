#include<stdio.h>
int main(){
	/*int i; //4.1
	for(i=0 ; i<30 ;i++){
		printf("%d ",i+1);
	}*/
	
	/*int i,j,count=1; //4.2
	for(i=0 ; i<3 ;i++){
		for(j=0 ; j<10 ;j++){
			printf("%d ",count);
			count++;
		}
		printf("\n");
	}*/
	
	/*int i; //4.3
	for(i=1 ; i<=12 ; i++){
		printf("5 x %d = %d\n",i,5*i);
	}*/
	
	/*int i,input; //4.4
	printf("Enter number: ");
	scanf("%d",&input);
	for(i=1 ; i<=12 ; i++){
		printf("%d x %d = %d\n",input,i,input*i);
	}*/
	
	/*int w,sum=0; //4.5
	while(sum<400){
			printf("Enter weight: ");
			scanf("%d",&w);
			sum += w;
			//printf("%d\n",sum);
	}
	printf("Overload!!");*/
	
	/*int w,sum=0; //4.6
	while(sum<400){
			printf("Enter weight: ");
			scanf("%d",&w);
			sum += w;
			
	}
	printf("%d\n",sum);
	printf("Overload!!");*/
	
	/*char c; //4.7
	do{
		printf("Enter grade: ");
		scanf(" %c",&c);
	}while(c<'A' || c>'E');
	printf("Grade = %c",c);*/
	
	/*int i,j;  //4.8
	for(i=1 ;i<=5 ; i++){
		for(j=0 ;j<i ; j++){
			printf("*");
		}
		printf("\n");
	}*/
	
	/*int i,sum=0,input,a; //4.2.1
	printf("Enter an integer: ");
	scanf("%d",&input);
	printf("Enter %d integer: ",input);
	for(i=0 ; i< input ; i++){
		scanf("%d",&a);
		sum += a;
	}
	printf("Sum of integer = %d",sum);*/
	
	/*int i,j,input,w,sum=0; //4.2.2
	printf("Enter an integer: ");
	scanf("%d",&input);
	do{
		sum+=input%10;
		input/=10;
	}while(input!=0);
	printf("%d",sum);*/
	
	int n, i, flag = 0;  //4.2.3
    printf("Enter a integer: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i) {
        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }
    
	return 0;
}
