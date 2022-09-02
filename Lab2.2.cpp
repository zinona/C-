#include <stdio.h>

int main(){
	int x, y;
	printf("Please enter the height x: ");
	scanf("%d", &x);
	printf("Please enter the width y: ");
	scanf("%d", &y);
	
	for (int i=0; i<x; i++){
		if(i%(x/2)==0){
			for(int t=0; t<y; t++){
				printf("#");
			}
			printf("\n");
		}
		else{
			printf("#\n");
		}
	}
	
	
	return 0;
}
