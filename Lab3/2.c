#include <stdio.h>
int main()
{
	 int age;   //2
     printf("Please enter your age:  ");
     scanf("%d",&age);
     if(age>=0&&age<=4){
         printf("You are pre-school child");
     }
     else if (age>=5&&age<=11)
     {
         printf("You are kid");
     }
     else if (age>=12&&age<=19)
     {
         printf("You are adolescent");
     }
     else if (age>=20&&age<=59)
     {
         printf("You are adult");
     }
     else{
         printf("You are elderly");
     }
     
     return 0;
}
