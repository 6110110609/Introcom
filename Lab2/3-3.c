#include <stdio.h>
int main()
{

     int x;       //3.3
     printf("Enter an integer: ");
     scanf("%d",&x);
     if(x==0){
         printf("Zero");
     }
     else if(x%2==0){
         if(x>0)
             printf("Positive even number");
         else
             printf("Negative even number");
     }
     else
     {
         if(x>0)
             printf("Positive odd number");
         else
             printf("Negative odd number");
     }

    return 0;
}
