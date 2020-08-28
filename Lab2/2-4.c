#include <stdio.h>
int main()
{

     int p,c,f;   //2.4
     printf("Enter Protein (g): ");
     scanf("%d",&p);
     printf("Enter Carbohydrate (g): ");
     scanf("%d",&c);
     printf("Enter Fat (g): ");
     scanf("%d",&f);
     printf("Total Calorie = %d Kcal",p*4+c*4+f*9);

    return 0;
}
