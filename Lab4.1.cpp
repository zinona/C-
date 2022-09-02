#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bigsum(int *firstnum, int *secondnum, int *total, int size1, int size2, int *size3){
	int i = size1-1;
	int j = size2-1;
	int carry=0;
	int index=0;
	
	while (i>=0 &&& j>=0){
		int sum =firstnum[i]+secondnum[j]+carry;
		carry=0;
		total[index]=sum%10;
		index++;
		carry=sum/10;
		i--;
		j--;
	}
	
	while(i>=0){
		int sum=firstnum[i]+carry;
		carry=0;
		total[index]=sum;
		index++;
		i--;
	}
	
	while(j>=0){
		int sum=secondnum[j]+carry;
		carry=0;
		total[index]=sum;
		index++;
		j--;
	}
	
	if(carry){
		total[index]=1;
		index++;
	}
	
	*size3=index;
}

int main(){
	int firstnum[20];
	int secondnum[20];
	int total[22];
	int digit1;
	int digit2;
	int digit3;
	
	printf("First numbers digits are: ");
	scanf("%d", &digit1);
	printf("Second numbers digits are: ");
	scanf("%d", &digit2);
	printf("First Long integer\n: ");
	for(int i=0; i<digit1; i++){
		scanf("%d", &firstnum[i]);
	}
	printf("Second Long integer\n: ");
	for(int i=0; i<digit2; i++){
		scanf("%d", &secondnum[i]);
	}
	bigsum(firstnum, secondnum, total, digit1, digit2, &digit3);
	printf("\nBig sum = ");
	for(int i=digit3-1; i>=0; i--){
		printf("%d", total[i]);
	}
}
