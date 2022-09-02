#include <stdio.h>
#include <math.h>

main(int argc, char *arvg[]){
	int n,i;
	int d2, count, reset=0;
	double d1;
	
	while (1){
		printf("Enter a number (0 to quit): ");
		scanf("%d", &n);
		if (n==0)
			break;
		count=0;
		
		for(i=2; i<n/2; i++){
            if ( n % i == 0) {
			printf("%d is not prime\n", n); 
			reset=1; break; 
			}
        }
        if (reset) {
		continue;
		}
        printf("%d is prime\n" ,n );
	}
}
