#include<stdio.h>
int main()
{
	int i, j, scores[3][5] = {{1, 2, 3, 4, 5},{6, 7, 8, 9, 10},{11, 12, 13, 14, 15}}; //2
	float sum,avg=0;
	for(i=0; i<3 ; i++){
		for(j=0, sum=0.0; j<5; j++)
 			sum = sum + scores[i][j];
 		printf("Average of row %d = %.2f\n",i+1,sum/5);
		avg += sum;
 	}
 	printf("Average = %.1f",avg/15);
	}

	return 0;
}
