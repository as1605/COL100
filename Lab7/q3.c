#include <stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int A[100][100];//declaration of matrix
   for( int i=0;i<n;i++){
    for(int j=0;j<n;j++){
          scanf("%d",&A[i][j]);
      }
   }
   int check=0;
   for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++){
        if(A[i][j]!=A[j][i]){
              check=1;
	      break;
	}
      }
      if(check==1)
	      break;
   }
   if(check==0)
	   printf("Symmetric");
   else
	   printf("Not Symmetric");

}

