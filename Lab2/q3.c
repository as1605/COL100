#include <stdio.h>

void main() {
    int n;
    scanf("%d",&n);
    if (n<2) {
        printf("NOT a Prime Number\n");
    	return;
    }
    for(int i=2; i*i<=n; i++) {
          if ( n==(n/i)*i ) { //fast way to check n%i==0
          	printf("NOT a Prime Number\n");
	  	return;
	  } 
    }
    printf("Is a Prime Number\n"); 
}
