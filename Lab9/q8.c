#include <stdio.h>
const int size=10;
int Det_Cofactor(int A[size][size],int p,int q,int n);
int Det(int n,int A[size][size]);
void Inverse(int n,int A[size][size],float Inv[size][size],int det);
int main() {
        int n;
        scanf("%d",&n);
        int A[size][size];
        for(int i=0;i<n;i++) {
          for(int j=0;j<n;j++)
                  scanf("%d",&A[i][j]);
        }
          int check=Det(n,A);
          if(check==0)
                  printf("Inverse does not exist\n");
          else{
                  float Inv[size][size];
                  Inverse(n,A,Inv,check);
                   for(int i=0;i<n;i++) {
                    for(int j=0;j<n;j++)
                       printf("%.2f ",Inv[i][j]);
                    printf("\n");
                }

          }
        return 0;
}

int Det_Cofactor(int A[size][size],int p,int q,int n) {
	int i=0,j=0;
	int temp[size][size];
       for(int r=0;r<n;r++) {
       for(int c=0;c<n;c++) {
           if(r!=p && c!=q) {
               temp[i][j]=A[r][c];
	       j++;
	       if(j==n-1) {
                   j=0;
		   i++;
	       }
	   }
         }
       }
     int det_cofactor = Det(n-1,temp);
     return det_cofactor;

}
int Det(int n,int A[size][size] ) {
  int det=0,sign=1;
  if(n==1)
	  det=A[0][0];
   else {
      for(int j=0;j<n;j++ ) {
	      int yes=Det_Cofactor(A,0,j,n);
         det += sign*A[0][j]*yes;
	 sign=-sign;
      }	 
   }     
  return det;
}
void Inverse(int n,int A[size][size],float Inv[size][size],int det) {
	float sign=1;
	if(n==1)
		Inv[0][0]=1.0/det;
	else{
      for(int i=0;i<n;i++) {
	      if(i%2==0)
		      sign=1;
	      else
		      sign=-1;
        for(int j=0;j<n;j++) {
             int temp=Det_Cofactor(A,j,i,n);
             Inv[i][j]=(sign*temp)/det;
            sign=-sign;	     
	}
      }
    }
}

