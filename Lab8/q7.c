#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int A[100][100];
   for(int i=0;i<n;i++) {
      for(int j=0;j<n;j++) {
            scanf("%d",&A[i][j]);
      }
   }
       int temp;
        for(int i=0;i<n;i++) {
         for(int j=0;j<i;j++) {
            temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
      }

    for(int i=0;i<n;i++) {
      for(int j=0;j<n;j++) {
            printf("%d ",A[i][j]);
      }
      printf("\n");
   }
	return 0;
}

