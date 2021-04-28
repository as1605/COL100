#include <stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
          scanf("%d",&A[i]);
	}
        int max,min,max_pos,min_pos;
	max=min=A[0];
	max_pos=min_pos=0;
	for(i=1;i<n;i++){
         if(A[i]>max){
            max=A[i];
	    max_pos=i;//finding the position of maximum elelment
	 }
	 else if(A[i]<min){
           min=A[i];
            min_pos=i;//finding the position of minimum element
	 }
    }
	 int temp;//temporary variable
	 //swapping minimum and maximum numbers
	 temp=A[max_pos];
           A[max_pos]=A[min_pos];
           A[min_pos]=temp;
	
	  for(i=0;i<n;i++){
          printf("%d ",A[i]);
        }


  return 0;
}

