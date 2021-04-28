#include <stdio.h>
int check_prime(int m) {
      int i;
      for(i=2;i*i<m;i++) {
         if(m%i==0 ) {
		 return 0;
      }
 }
      return 1;
}  //this function returns 0 if the number m is not prime and returns 1 if it's prime 
int main() {
        int n,i;
	scanf("%d",&n);
	int check_i=0,check_2=0;
      for(i=2;i<=n/2;i++) {
               check_i=check_prime(i);
            if (check_i==1){
                  check_2 =check_prime(n-i);
		  if(check_2==1){
                    printf("true");
		    return 0;
		  }
	    }
      }
      printf("false");
}

