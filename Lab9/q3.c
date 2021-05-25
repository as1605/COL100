#include <stdio.h>
int main() {
        int m,n;
        int A[100];
	scanf("%d",&m);
        scanf("%d",&n);
        for(int i=0;i<n;i++)
          scanf("%d",&A[i]);
        int pos[1000]={0};//array to keep track of position of icecream having A[i] cost. All elements initialized to 0
	 for(int i=0;i<n;i++) {
            pos[A[i]]=i;
        }
	 
	for(int i=0;i<n-1;i++) {
             int y = m-A[i];
	     if(y>0 && pos[y]>0) {
		   printf("%d %d",i,pos[y]);
                   break;
	     }
	}
        return 0;
}

