#include <stdio.h>
int peakIndex(int A[],int n) {
    int a=0,b=n-1;
    int mid = (a+b)/2;
    while(a<=b) {
        if(A[mid]<A[mid+1])
		a=mid+1;
	else 
		b=mid-1;
	mid = (a+b)/2;
    }
    mid+=1;
    return mid;
}
int main() {
        int n;
        int A[100];
        scanf("%d",&n);
        for(int i=0;i<n;i++)
          scanf("%d",&A[i]);
        printf("%d\n",peakIndex(A,n));
        return 0;
}

