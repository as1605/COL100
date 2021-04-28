#include <stdio.h>
int main(){
   int n,b;
  scanf("%d %d",&n,&b);
 int A[100];
  for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
  } 
    int B[1000][2],count=0;//count is variable keeping values of no. of pairs
  for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                  if(A[i]+A[j]==b){
                   B[count][0]=A[i];
		   B[count][1]=A[j];
		   count++;
		  }
	    }
  }
  for(int i=0;i<count;i++){
          printf("%d %d\n",B[i][0],B[i][1]);
  }
}

