#include <stdio.h>
int const size=100;
int main() {
    int m,n;
     scanf("%d %d",&m,&n);
    int A[size][size];
     for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
         scanf("%d",&A[i][j]);
        }
     }
     int p = m+n-2;
     
     for(int k=0;k<=p;k++) {
         int i;
	 if(k<m)
		 i=k;
	 else
		 i=m-1;
       while(i>=0 && k-i<n) {
             printf("%d ",A[i][k-i]);
	     i--;
       }	       
        printf("\n");
     }

     return 0;
}

