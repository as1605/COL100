#include <stdio.h>
int main(){
	int n,b;
	scanf("%d %d",&n,&b);
	int A[100];
	for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
  	} 
	int count=0;//count is variable keeping values of no. of pairs
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(A[i]+A[j]==b){
				printf("%d %d\n",A[i],A[j]);
				count++;
			}
	    }
  	}
}

