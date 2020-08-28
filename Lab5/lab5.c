#include<stdio.h>
int main(){
//	int num[10],i;
//	printf("Enter 10 numbers: ");
//	for(i=0; i<10; i++){
//		scanf("%d",&num[i]);
//	}
//	printf("Reverse order=> ");
//	for(i=9; i>=0; i--){
//		printf("%d ",num[i]);
//	}

//	int num1[10]={1,2,3,4,5,6,7,8,9,10},num2[10],i;
//	printf("First array=  ");
//	for(i=0; i<10; i++){
//		printf("%d ",num1[i]);
//		num2[i]=num1[i]*num1[i];
//	}
//	printf("\nSecond array=  ");
//	for(i=0; i<10; i++){
//		printf("%d ",num2[i]);
//	}
	
//	int i=0;
//	char c[128];
//	printf("Enter string: ");
//	gets(c);
//	while(c[i]!='\0'){
//		printf("%c\n",c[i]);
//		i++;
//	}

//	int i=0;
//	char c[128];
//	printf("Enter string: ");
//	gets(c);
//	while(c[i]!='\0'){
//		i++;
//	}
//	while(i>=0){
//		printf("%c",c[i]);
//		i--;
//	}
	
//	int input,num[10],i,check=-1;
//	printf("Enter 10 numbers: ");
//	for(i=0; i<10; i++){
//		scanf("%d",&num[i]);
//	}
//	printf("Number to search: ");
//	scanf("%d",&input);
//	for(i=0; i<10; i++){
//		if(input == num[i]){
//			check = i;
//			break;	
//		}
//	}
//	if(check!=-1){
//		printf("Position= %d ",check+1);	
//	}
//	else{
//		printf("Data not found");
//	}

//	char str[128];
//	int i=0,check=0;
//	printf("Enter string: ");
//	gets(str);
//	while(str[i]!='\0'){
//		if(str[i]=='a'){
//			check = 1;
//		}
//		i++;
//	}
//	if(check==1){
//		printf("Good");
//	}
//	else
//		printf("Not good");

//	int input,num[10],i,max,min;
//	printf("Enter 10 numbers: ");
//	for(i=0; i<10; i++){
//		scanf("%d",&num[i]);
//	}
//	max=num[0];
//	min=num[0];
//	for(i=0; i<10; i++){
//		if(min>num[i]){
//			min=num[i];
//		}
//		if(max<num[i]){
//			max=num[i];
//		}
//	}
//	printf("Max = %d\n",max);
//	printf("Min = %d",min);

//	int input,num[10],i,count=0;
//	float aver=0;
//	printf("Enter 10 numbers: ");
//	for(i=0; i<10; i++){
//		scanf("%d",&num[i]);
//		aver=aver+num[i];
//	}
//	aver = aver /10;
//	printf("Average= %.1f\n",aver);
//	printf(">");
//	for(i=0; i<10; i++){
//		if(num[i]>aver){
//			printf("%d ",num[i]);
//			count++;
//		}
//	}
//	printf("\nCount=%d",count);

//	char character;
// 	int index, len;
//	char string[20+1];
//	printf("Enter text: ");
//	scanf("%s",string);
//	index=0;
//	while(string[index] != '\0')
//	{
//		index++; }
//		len=index;
//	for(index=0; index<len; index++)
//	{
//		if(string[index]>='a' && string[index]<='z')
//			string[index]= string[index] - ('a'-'A');
//	}
//	printf("New string = %s \n", string); 

//	char search,replace,str[128];
//	int i=0;
//	printf("Enter string: ");
//	gets(str);
//	printf("Enter a character to search: ");
//	scanf(" %c",&search);
//	printf("Enter a character to replace: ");
//	scanf(" %c",&replace);
//	while(str[i]!='\0'){
//		if(str[i]==search){
//			str[i]=replace;
//		}
//		i++;
//	}
//	printf("New string = %s \n", str);	
	
//	char str[128];
//	int i=0,count=1;
//	printf("Enter text: ");
//	gets(str);
//	while(str[i]!=0){
//		if(str[i]==' '){
//			count++;
//		}
//		i++;
//	}
//	printf("Word count= %d",count);	
	
	return 0;
}
