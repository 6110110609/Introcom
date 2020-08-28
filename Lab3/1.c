#include <stdio.h>
int main()
{
	  int age,h;   //1
     printf("Enter age: ");
     scanf("%d",&age);
     printf("Enter height: ");
     scanf("%d",&h);
     if(age>=18&&age<=25&&h>=165){
         printf("Good.");
     }
     else
     {
         printf("Not Good.");
     }
     
     return 0;
}
