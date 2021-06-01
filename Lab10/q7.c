#include<stdio.h>
int const size=100;
void Merge(int A[],int B[],int n,int m) {
     int C[size];
     int i=0,j=0,k=0;
     while(i<n && j<m) {
          if(A[i]<B[j]){
               C[k]=A[i];
	       i++;
	       k++;
	  }
	  else{
             C[k]=B[j];
	     j++;
	     k++;
	  }
     }
     while(i<n) {
        C[k]=A[i];
	i++;
	k++;
     }// copying the elements of A[] left,if any
     while(j<m) {
      C[k]=B[j];
       j++;
       k++;
     } // copying the elements of A[] left,if any   
      for(int i=0;i<k;i++)
	      printf("%d ",C[i]);
      printf("\n");
}
int main() {
    int n;
    int A[size];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
	    scanf("%d",&A[i]);
      int m;
    int B[size];
    scanf("%d",&m);
    for(int i=0;i<m;i++)
            scanf("%d",&B[i]);
    Merge(A,B,n,m);
}

