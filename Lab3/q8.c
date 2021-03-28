#include <stdio.h>
void main(){
        int n,sum=0; 
  scanf("%d",&n);
  for(int i=1;i<n;i++){
            if(n%i==0){
           sum+=i;}
  }  //now sum represents sum of the factors
  if(n==sum){
	  printf("Perfect");}
  else{
	  printf("Not Perfect");}
}

