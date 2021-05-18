#include <stdio.h>
int isSorted(int A[],int n){
	if(A[n-2]<A[n-1]) {
     for(int i=n-2;i>0;i--){
      if(A[i]<A[i-1]){
          return 0;
      }
     }// to check if it's a increasing array
     return 1;
 }
	else if(A[n-2]>A[n-1]) {
      for(int i=n-2;i>0;i--){
         if(A[i]>A[i-1]){
          return 0;
      }
     } // to check if it's a decreasing array

      return 1;
  }
	else if(A[n-2]==A[n-1]) {
		if(n==2)
	        return 1;
		else {		
            int check=isSorted(A,n-1);
             if(check==0)
	     return 0;
	     else 
		     return 1;
          }
             	     
	}
     return 1;
}
// this function returns 1 if the array is sorted and 0 if it's not sorted
int main(){
   int n;
   scanf("%d",&n);
    int A[100];
    for(int i=0;i<n;i++){
       scanf("%d",&A[i]);
    }
    int check = isSorted(A,n);
    if(check==0)
	    printf("false\n");
    else
	    printf("true\n");

	return 0;
}

