#include <stdio.h>
int main(){
    int n;
   scanf("%d",&n);
   int A[n];//creation of array
   for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
   }
   int K;
   scanf("%d",&K);
   for(int i=n-(K%n);i<n;i++){
       printf("%d ",A[i]);
   }
   for(int i=0;i<n-(K%n);i++){
       printf("%d ",A[i]);
   }

}

