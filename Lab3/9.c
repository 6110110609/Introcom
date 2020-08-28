#include <stdio.h>
int main()
{
	 float dis;     //9
    int dis1;
    printf("Enter Distance: ");
    scanf("%f",&dis);
    dis1=dis;
    printf("%d",dis1);
    if(dis<=1.00){
        printf("Taxi Fee = %.2f Baht",35.0);
    }
    else if (dis>1.00&&dis<=10.00)
    {
        if(dis - dis1 > 0)
            printf("Taxi Fee = %.2f Baht",dis1*5.0+35.0);
        else
            printf("Taxi Fee = %.2f Baht",(dis1-1.0)*5.0+35.0);
    }
    else
    {
        if(dis - dis1 > 0)
            printf("Taxi Fee = %.2f Baht",35+(9*5)+(dis1-10)*5.5+5.5);
        else
            printf("Taxi Fee = %.2f Baht",35+(9*5)+(dis1-10)*5.5);
    }
     
     return 0;
}
