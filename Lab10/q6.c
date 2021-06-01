#include<stdio.h>
int const size=100;
void swap(int *a,int *b) {
     int tmp;
        tmp = *a;
        *a = *b;
        *b = tmp;
}
int partition (int A[],int start, int end) {
   int piv=A[end],i=start;
    for(int j= start;j<end;j++) {
      if(A[j]<=piv) {
             swap(&A[j],&A[i]);
             i++;
      }
    }
    swap(&A[i],&A[end]);
    return i;
} //placing the end element at its correct position(and also smaller elements on the left side and greater on the right side) and returning the index 
void quicksort(int A[],int start,int end) {
    if(start<end) {
        int piv = partition(A,start,end);
	quicksort(A,start,piv-1);
	quicksort(A,piv+1,end);
    }
}
int main() {
   int n;
   scanf("%d",&n);
   int A[size];
   for(int i=0;i<n;i++) {
     scanf("%d",&A[i]);
   }
     quicksort(A,0,n-1);
     for(int i=0;i<n;i++)
             printf("%d ",A[i]);
     printf("\n");
}

