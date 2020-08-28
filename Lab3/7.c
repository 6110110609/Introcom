#include <stdio.h>
int main()
{
	 float total;    //7
     printf("Enter total sales: ");
     scanf("%f",&total);
     if(total<1000){
         printf("Sales Commission = %.1f",total*5/100.0);
     }
     else if (total>=1000&&total<=5000)
     {
         printf("Sales Commission = %.1f",total*7/100.0);
     }
     else
     {
         printf("Sales Commission = %.1f",total*10/100.0);
     }
     
     return 0;
}
