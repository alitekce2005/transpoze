#include <stdio.h>
int matris[3][4];
int transpoze[4][3];/*
1 2 3 4    1 5 9
5 6 7 8    2 6 0
9 0 1 2    3 7 1
           4 8 2
*/
int main(){
	int hf=10;
	for(int k=0;k<3;k++){
		for(int l=0;l<4;l++){
			matris[k][l]=hf;
			hf++;
		}
	}
	int m,n;
	for(m=0;m<3;m++){
		for(n=0;n<4;n++){
		transpoze[n][m]=matris[m][n];
		}
	}
	printf("MATRÝS\n");
	for(int k=0;k<3;k++){
		printf("\n");
		for(int l=0;l<4;l++){
			printf("%d%3d",matris[k][l]);
		}
	}
	printf("\nTRANSPOZE\n");
	for(int a=0;a<4;a++){
		printf("\n");
		for(int b=0;b<3;b++){
			printf("%d%3d",transpoze[a][b]);
		}
	}
	return 0;
}
