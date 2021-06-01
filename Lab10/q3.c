#include<stdio.h>
int const size=100;
int search_x(int A[],int p,int q,int x) {
	if(p==q) {
        if(A[p]==x)
		return 1;
	else 
		return -1;
	}
    int t=(p+q)/2;
    if(A[t]==x)
	    return 1;
    else {
      if(x<A[t])
	      return search_x(A,p,t-1,x);
      else
	      return search_x(A,t+1,q,x);
    }
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

