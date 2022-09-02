#include <stdio.h>
#include <stdlib.h>

int main(){
	float a[2][3];
	float b[3][2];
	float c[2][2]={0};
	
	printf("Please enter the first matrix: ");
	for(int i=0; i<2; i++){
		for(int j=0; j<3; ++j){
			scanf("%f", &a[i][j]);
		}
	}
	printf("Please enter the second matrix: ");
	for(int i=0; i<3; i++){
		for(int j=0; j<2; ++j){
			scanf("%f", &b[i][j]);
		}
	}
	for(int i=0; i<2; ++i){
		for(int j=0; j<2; ++j){
			for(int m=0; m<3; ++m){
				c[i][j] += a[i][m] * b[m][j];
			}
		}
	}
	printf("Solution is: \n");
	for(int i=0; i<2; ++i){
		for(int j=0; j<2; ++j){
			printf("%.0f", c[i][j]);
			if(j==2){
				printf("\n");
			}
		}
	}
	return 0;
}
