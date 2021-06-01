#include<stdio.h>
int const size=100;
int search_x(int A[],int p,int q,int x) {
        if(p<=q) {
    int t=(p+q)/2;
    if(A[t]==x)
            return t;
    else {
      if(x<A[t])
              return search_x(A,p,t-1,x);
      else
              return search_x(A,t+1,q,x);
    }
  }
}  // returns index of x in log(n) time

void swap(int *a,int *b) {
     int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void partition (int A[],int start, int end) {
   int piv=A[end],i=start;
    for(int j= start;j<end;j++) {
      if(A[j]<=piv) {
             swap(&A[j],&A[i]);
	     i++;
      }
    }
    swap(&A[i],&A[end]);
}
int main() {
   int n;
   scanf("%d",&n);
   int A[size];
   for(int i=0;i<n;i++) {
     scanf("%d",&A[i]);
   }
   int x;
   scanf("%d",&x);
   int index=search_x(A,0,n-1,x);
     swap(&A[index],&A[n-1]);//swapping x with the last element
     partition(A,0,n-1);
     for(int i=0;i<n;i++)
	     printf("%d ",A[i]);
     printf("\n");
}

