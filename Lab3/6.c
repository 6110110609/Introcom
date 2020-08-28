#include <stdio.h>
int main()
{
	 float l,w,bmi;  //6
     printf("Enter w: ");
     scanf("%f",&w);
     printf("Enter l: ");
     scanf("%f",&l);
     bmi=w/l/l;
     if(bmi<18.5){
         printf("Underweight");
     }
     else if (bmi>=18.5&&bmi<25)
     {
         printf("Normal");
     }
     else if (bmi>=25&&bmi<=30)
     {
         printf("Overweight");
     }
     else
     {
         printf("Obese");
     }
     
     return 0;
}
