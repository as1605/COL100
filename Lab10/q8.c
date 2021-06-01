#include<stdio.h>
int const size=100;
void Merge(int A[],int L[],int R[],int p,int n1,int n2) {
   int i=0,j=0;
    int k=p;
    while(i<n1 && j<n2) {
         if(L[i]<R[j]) {
            A[k]=L[i];
	    k++;
	    i++;
	 }
	 else {
            A[k]=R[j];
	    k++;
	    j++;
	 }
    } // merging the arrays back to original one
    while(i<n1) {
       A[k]=L[i];
       i++;
       k++;
    } //copying the elements of L[],if any left
      while(j<n2) {
       A[k]=R[j];
       j++;
       k++;
    } //copying the elements of R[],if any left
      return ;

}
void sort(int A[],int p,int q) {
  if(p<q) {
  int t=(p+q)/2;
     sort(A,p,t);
     sort(A,t+1,q);
	 int L[size], R[size];//creating temporary arrays
      int n1=t-p+1,n2=q-t;
      int i=0,j=0;
      for( i=0;i<n1;i++)
	      L[i]=A[i+p];
       for( j=0;j<n2;j++)
              R[j]=A[j+t+1];  
     Merge(A,L,R,p,n1,n2);
  }
  return;
}
int main() {
    int n;
    int A[size];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
            scanf("%d",&A[i]);
    sort(A,0,n-1);
    for(int i=0;i<n;i++) 
	    printf("%d ",A[i]);
    printf("\n");
}

