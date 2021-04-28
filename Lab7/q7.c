#include <stdio.h>
int main(){
 int n,i;
 scanf("%d",&n);
  int A[100];
  for(i=0;i<n;i++){
        scanf("%d",&A[i]);
  }
  int B[100],j;
   B[0]=A[0],j=1;
  for(i=1;i<n;i++){
       if(A[i]!=A[i-1]){
            B[j]=A[i];
	    j++;
       }
  }
     printf("%d\n",j);//j counts the no. of elements in B[100]
  for(i=0;i<j;i++){
    printf("%d ",B[i]);
  }
}

