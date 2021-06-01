#include<stdio.h>
#include<limits.h>
int const size=100;
int  find_min(int A[],int p,int q) {
	if(p==q)
		return p;
   int t=(p+q)/2;
   int ind1 = find_min(A,p,t);
   int ind2 = find_min(A,t+1,q);
   if(A[ind1]<A[ind2])
	   return ind1;
   else
	   return ind2;
}
int main() {
   int n;
   scanf("%d",&n);
   int A[size];
   for(int i=0;i<n;i++) {
     scanf("%d",&A[i]);
   }
   int ind_min = find_min(A,0,n-1);
      A[ind_min] =INT_MAX;
      printf("%d %d\n",ind_min,find_min(A,0,n-1));
}



