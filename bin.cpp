#include <stdio.h>
#include <stdlib.h>

int main(){
	int nPas, tPrice, i, age;
	float tAmount=0, price;
	
	scanf("%d%d", &nPas, &tPrice);
	while(i<=nPas)
	{
		scanf("%d", &age);
		if(age<=2){
			price=0.1*tPrice;
		}
		else{
			price=tPrice;
			tAmount+=tAmount;
			i++;
		}
	}
	printf("%.2f\n", tAmount);
	
	return 0;
}
