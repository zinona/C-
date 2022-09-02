#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x=16, i=0;
	printf("%d\n", x);
	
	for(i=0; i<4; i++){
		x=x>>1;
		printf("%d\n", x);
	}
	
	return 0;
	
}
