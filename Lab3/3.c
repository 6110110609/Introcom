#include <stdio.h>
int main()
{
	 int s,m,d;  //3
     printf("Enter number of starters: ");
     scanf("%d",&s);
     printf("Enter number of main courses: ");
     scanf("%d",&m);
     printf("Enter number of desserts: ");
     scanf("%d",&d);
     if(m>=2){
         if(d>0)
             printf("Total cost = %d",s*80+m*100+d*40-40);
         else
             printf("Total cost = %d",s*80+m*100+d*40);
     }
     else
     {
         printf("Total cost = %d",s*80+m*100+d*40);
     }
     
     return 0;
}
