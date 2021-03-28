#include <stdio.h>
void main(){
    int n,sum,no_of_digits,copy,lastdigit,power;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        sum = 0;
        no_of_digits=0;
        copy=i;//copying the value of i
	while(copy!=0){
		copy=copy/10;
		no_of_digits++;}//finding no.of digits
	copy=i;//again copying as the value of copy changed in the procedure for calculating no of digits

        while(copy>0){ 
	    	power=1;
            lastdigit = copy % 10;
             for(int a=1;a<=no_of_digits;a++){
               power*=lastdigit;
	     }
	       sum = sum + power; // Finding sum of power of digits
            copy = copy/10;
        }//checking if the no. is armstrong

        if(i==sum){
            printf("%d ",i);
        }
 }
}
