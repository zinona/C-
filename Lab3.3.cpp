#include <stdio.h>

int main(){
	int x, N, mult, div;
	scanf("%d%d", &x, &N);
	//mult=x<<N;
	div=x>>N;
	//printf("multiplication is %d", mult);
	printf("division is %d", div);
	return 0;
}
