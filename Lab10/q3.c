#include<stdio.h>
int const size=100;
int search_x(int A[],int p,int q,int x) {
	if(p<q) {
    int t=(p+q)/2;
    if(A[t]==x)
	    return 1;
    else {
      if(x<A[t]){
	      int B[size];
	      for(int i=0;i<t-p;i++) {
	         B[i]=A[i+p];
	      }
	      return search_x(B,0,t-p-1,x);
      }
      else {
	      int B[size];
	      for(int i=0;i<q-t;i++) {
	         B[i]=A[i+t+1];
	      }
	      return search_x(B,0,q-t-1,x);
        }
      }
  }
	else
		return -1;
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
   printf("%d\n",search_x(A,0,n-1,x));

}

