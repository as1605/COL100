#include <stdio.h>
int main(){
           int a,b,i,j,no_of_pairs=0;
	 scanf("%d %d",&a,&b);
	 for(j=a;j<=b;j++){
               for(i=a;i<=j;i++){
              if(j%i==0){
               no_of_pairs++;
	      }
	       }
		 }
	 printf("%d\n",no_of_pairs);
}

