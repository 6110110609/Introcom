#include <stdio.h>
int main()
{

     float w,l;   //3.4
     printf("Enter W: ");
     scanf("%f",&w);
     printf("Enter L: ");
     scanf("%f",&l);
     if(w==l){
         printf ("It is a square.");
     }
     else
     {
         printf ("It is a rectangle.");
     }

    return 0;
}
