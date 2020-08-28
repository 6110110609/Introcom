#include <stdio.h>
int main()
{

     int r, h;       //2.3
     float v=0;
     printf("Enter the radius and height of cone: ");
     scanf("%d %d",&r,&h);
     v=1/3.0*3.1415*r*r*h;
     printf("Volume of cone is %.2f",v);

    return 0;
}
