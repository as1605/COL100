#include <stdio.h>
int main(){
     int n,i;
     scanf("%d",&n);
     int Array[n];
     for(i=0;i<n;i++){
            scanf("%d",&Array[i]);
     }
     int k,freq=0;//initializing frequency to 0
     scanf("%d",&k);
     for(i=0;i<n;i++){
       if(k==Array[i])
	       freq++;
     }
     printf("%d",freq);
}

