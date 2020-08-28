#include <stdio.h>
int main()
{
    // int age,h;   //1
    // printf("Enter age: ");
    // scanf("%d",&age);
    // printf("Enter height: ");
    // scanf("%d",&h);
    // if(age>=18&&age<=25&&h>=165){
    //     printf("Good.");
    // }
    // else
    // {
    //     printf("Not Good.");
    // }

    // int age;   //2
    // printf("Please enter your age:  ");
    // scanf("%d",&age);
    // if(age>=0&&age<=4){
    //     printf("You are pre-school child");
    // }
    // else if (age>=5&&age<=11)
    // {
    //     printf("You are kid");
    // }
    // else if (age>=12&&age<=19)
    // {
    //     printf("You are adolescent");
    // }
    // else if (age>=20&&age<=59)
    // {
    //     printf("You are adult");
    // }
    // else{
    //     printf("You are elderly");
    // }

    // int s,m,d;  //3
    // printf("Enter number of starters: ");
    // scanf("%d",&s);
    // printf("Enter number of main courses: ");
    // scanf("%d",&m);
    // printf("Enter number of desserts: ");
    // scanf("%d",&d);
    // if(m>=2){
    //     if(d>0)
    //         printf("Total cost = %d",s*80+m*100+d*40-40);
    //     else
    //         printf("Total cost = %d",s*80+m*100+d*40);
    // }
    // else
    // {
    //     printf("Total cost = %d",s*80+m*100+d*40);
    // }

    // char c; //4
    // printf("Enter Char: ");
    // scanf(" %c",&c);
    // if(c=='R' || c=='r'){
    //     printf("Red");
    // }
    // else if(c=='Y' || c=='y'){
    //     printf("Yellow");
    // }
    // else if(c=='G' || c=='g'){
    //     printf("Green");
    // }
    // else
    // {
    //     printf("Stop");
    // }

    // int temp;   //5
    // printf("Enter level temp: ");
    // scanf("%d",&temp);
    // switch (temp)
    // {
    // case 10:
    //     printf("Very cold");
    //     break;
    // case 15:
    //     printf("Very cold");
    //     break;
    // case 20:
    //     printf("So cool!");
    //     break;
    // case 26:
    //     printf("Wish I am on the beach");
    //     break;
    // case 33:
    //     printf("Wish I am on the beach");
    //     break;
    // case 35:
    //     printf("Super hot");
    //     break;
    // default:
    //     break;
    // }

    // float l,w,bmi;  //6
    // printf("Enter w: ");
    // scanf("%f",&w);
    // printf("Enter l: ");
    // scanf("%f",&l);
    // bmi=w/l/l;
    // if(bmi<18.5){
    //     printf("Underweight");
    // }
    // else if (bmi>=18.5&&bmi<25)
    // {
    //     printf("Normal");
    // }
    // else if (bmi>=25&&bmi<=30)
    // {
    //     printf("Overweight");
    // }
    // else
    // {
    //     printf("Obese");
    // }

    // float total;    //7
    // printf("Enter total sales: ");
    // scanf("%f",&total);
    // if(total<1000){
    //     printf("Sales Commission = %.1f",total*5/100.0);
    // }
    // else if (total>=1000&&total<=5000)
    // {
    //     printf("Sales Commission = %.1f",total*7/100.0);
    // }
    // else
    // {
    //     printf("Sales Commission = %.1f",total*10/100.0);
    // }

    // int hrin, minin, hrout, minout, hrsum = 0, minsum = 0, min = 0;  //8
    // printf("Enter-time (format hh.mm): ");
    // scanf("%d.%d", &hrin, &minin);
    // printf("Out-time (format hh.mm): ");
    // scanf("%d.%d", &hrout, &minout);
    // min = (hrout * 60 + minout) - (hrin * 60 + minin);
    // minsum = ((hrout * 60 + minout) - (hrin * 60 + minin)) % 60;
    // hrsum = ((hrout * 60 + minout) - (hrin * 60 + minin)) / 60;
    // printf("Total time: %d hour %d min\n", hrsum, minsum);
    // if (min <= 120)
    //     printf("Charge: %d Bath.", 50);
    // else if (min > 120 && min < 900)
    //     if (minsum <= 0)
    //         printf("Charge: %d Bath.", (hrsum - 2) * 10 + 50);
    //     else
    //         printf("Charge: %d Bath.", (hrsum - 1) * 10 + 50);
    // else
    //     printf("Charge: %d Bath.", 300);

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
