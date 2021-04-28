#include <stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int A[100],i;
   for(i=0;i<n;i++){
        scanf("%d",&A[i]);
   }
   int sum[100];
   sum[0]=A[0];
   for(i=1;i<n;i++){
     sum[i]=sum[i-1]+A[i];
   }
   for(i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
            if(sum[i]==sum[j]||sum[i]==0||sum[j]==0){    //this condition ckecks if sum[j]-sum[i]=0 ie.,sum of terms from i+2 to j+1 or sum of first i+1 terms or j+1 terms is zero
                  printf("true");
		  return 0;
	    }
       }
   }
    printf("false");
    return 0;
}

