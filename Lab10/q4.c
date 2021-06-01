#include<stdio.h>
int const size=100;
int ternarysearch(int A[],int p,int q,int x) {
        if(p==q) {
        if(A[p]==x)
                return 1;
        else
                return -1;
        }
    int mid1 = (2*p+q)/3;
    int mid2 = (p+2*q)/3;
    if(A[mid1]==x)
            return 1;
    else if(A[mid2]==x)
	    return 1;

    else {
      if(x<A[mid1])
              return ternarysearch (A,p,mid1-1,x);
      else if(x<A[mid2])
              return ternarysearch(A,mid1+1,mid2-1,x);
      else
	      return ternarysearch(A,mid2+1,q,x);
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
   printf("%d\n",ternarysearch(A,0,n-1,x));

}

