#include<stdio.h>
int main()
{
	char c[4][4];	//3.1
	int i,j,x,y;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
				c[i][j]='O';
		}
	}
	printf("x y: ");
	scanf("%d %d",&x,&y);
	c[x][y]='X';
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%c ",c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
