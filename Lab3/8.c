#include <stdio.h>
int main()
{
	 int hrin, minin, hrout, minout, hrsum = 0, minsum = 0, min = 0;  //8
     printf("Enter-time (format hh.mm): ");
     scanf("%d.%d", &hrin, &minin);
     printf("Out-time (format hh.mm): ");
     scanf("%d.%d", &hrout, &minout);
     min = (hrout * 60 + minout) - (hrin * 60 + minin);
     minsum = ((hrout * 60 + minout) - (hrin * 60 + minin)) % 60;
     hrsum = ((hrout * 60 + minout) - (hrin * 60 + minin)) / 60;
     printf("Total time: %d hour %d min\n", hrsum, minsum);
     if (min <= 120)
         printf("Charge: %d Bath.", 50);
     else if (min > 120 && min < 900)
         if (minsum <= 0)
             printf("Charge: %d Bath.", (hrsum - 2) * 10 + 50);
         else
             printf("Charge: %d Bath.", (hrsum - 1) * 10 + 50);
     else
         printf("Charge: %d Bath.", 300);
     
     return 0;
}
