#include<stdio.h>
int main()
{
	char c[4][4];	//3
	int i,j;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(i==j)
				c[i][j]='X';
			else
				c[i][j]='O';
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%c ",c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
