#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main(){
    int n,i, reset = 0;

    while (1){
        printf("Enter a number (0 to quit): ");
		scanf("%d", &n);
        reset = 0;
        if (n==0)
            return 1;
        for(i=2; i<n/2; i++){
            if ( n % i == 0) {
			printf("%d is not prime\n", n); 
			reset = 1; break; 
			}
        }
        if (reset) {
		continue;
		}
        printf("%d is prime\n" ,n );
    }
}
