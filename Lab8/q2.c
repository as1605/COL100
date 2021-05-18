#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int A[100];
  for(int i=0;i<n;i++){
   	scanf("%d",&A[i]);
  }
  int i,count[100] ={0};//all elements initialized to 0
  for(i=0;i<n;i++) { 
     count[A[i]]++;
  }
    // this array stores frequencies of numbers from 1 to n 
    int flag=0;
  for(i=1;i<=n;i++) {
   if(count[i]>=2) {
	   printf("%d ",i);
           flag=1;
   }
  }

  if(flag==0)
	 printf("No duplicates exist!"); 
  return 0;
}

