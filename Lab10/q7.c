#include<stdio.h>
int const size=100;
void Merge(int A[],int B[],int C[],int n,int m) {
     int i=0,j=0;
     while(i<n && j<m) {
          if(A[i]<B[j]){
               C[i+j]=A[i];
	       i++;
	  }
	  else{
             C[i+j]=B[j];
	     j++;
	  }
     }
     while(i<n) {
        C[i+j]=A[i];
	i++;
     }// copying the elements of A[] left,if any
     while(j<m) {
      C[i+j]=B[j];
       j++;
     } // copying the elements of A[] left,if any   
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
	int C[size];
    Merge(A,B,C,n,m);
	for(int i=0;i<n+m;i++)
	      printf("%d ",C[i]);
      printf("\n");
}

