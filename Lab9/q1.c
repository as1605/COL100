#include <stdio.h>
int findElement(int A[],int n) {
  int sum_left=0,sum_right=0;
  for(int i=0; i<n; i++)
    sum_right+=A[i];

  sum_right-=A[0];
  if(sum_left==sum_right)
    return 1;
  
  for(int i=1;i<n;i++) {
    sum_left+=A[i-1];
    sum_right-=A[i];
    if(sum_left==sum_right)
		  return 1;
  }
  return 0;
}	
int main() {
        int n;
	int A[100];
        scanf("%d",&n);
	for(int i=0;i<n;i++) 
          scanf("%d",&A[i]);
	printf("%d\n",findElement(A,n));
	return 0;
}

