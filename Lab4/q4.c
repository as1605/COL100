#include <stdio.h>
// function to check whether a no. is prime or not ,return 0 if prime and 1 if not prime
int checkprime(int num){
  int i,check=0;
  for(i=2;i<num;i++){
     if(num%i==0){
        check=1;
	break;
     }
  }
  return check;
}
int main(){
      int n,row,col;
      scanf("%d",&n);
      int num=2,temp;
     for(row=1;row<=n;row++){
            col=1;
	    while(col<=n){
             temp= checkprime(num);//storing value of check in temp
	     if(temp==0){
               printf("%d ",num);//if num is prime then,printing it and going to the next column
	        col++;     
	     }
	     num=num+1;
	 }
	    printf("\n");
     }
}


