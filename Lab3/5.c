#include <stdio.h>
int main()
{
	 int temp;   //5
     printf("Enter level temp: ");
     scanf("%d",&temp);
     switch (temp)
     {
     case 10:
         printf("Very cold");
         break;
     case 15:
         printf("Very cold");
         break;
     case 20:
         printf("So cool!");
         break;
     case 26:
         printf("Wish I am on the beach");
         break;
     case 33:
         printf("Wish I am on the beach");
         break;
     case 35:
         printf("Super hot");
         break;
     default:
         break;
     }
     
     return 0;
}
