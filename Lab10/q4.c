#include<stdio.h>
int const size=100;
int ternarysearch(int A[],int p,int q,int x) {
        if(p<=q) {
    int mid1 = (2*p+q)/3;
    int mid2 = (p+2*q)/3;
    if(A[mid1]==x)
            return 1;
    else if(A[mid2]==x)
	    return 1;

    else {
      if(x<A[mid1]){
	     int B[size];
	      for(int i=0;i<mid1-p;i++){
		 B[i]=A[i+p];      
	      }
              return ternarysearch (B,0,mid1-p-1,x);
      }
      else if(x<A[mid2]){
	      int B[size];
	      for(int i=0;i<mid2-mid1-1;i++){
		 B[i]=A[i+mid1+1];      
	      }
              return ternarysearch(B,0,mid2-mid1-2,x);
      }
	      else  {
	      	 int B[size];
	      for(int i=0;i<q-mid2;i++){
		 B[i]=A[i+mid2+1];      
	      }     
	      return ternarysearch(B,0,q-mid2-1,x);
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
   printf("%d\n",ternarysearch(A,0,n-1,x));

}

