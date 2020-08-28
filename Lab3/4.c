#include <stdio.h>
int main()
{
	 char c; //4
     printf("Enter Char: ");
     scanf(" %c",&c);
     if(c=='R' || c=='r'){
         printf("Red");
     }
     else if(c=='Y' || c=='y'){
         printf("Yellow");
     }
     else if(c=='G' || c=='g'){
         printf("Green");
     }
     else
     {
         printf("Stop");
     }
     
     return 0;
}
