#include <stdio.h>

void main() {
	int n,factorial=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		factorial*=i;
 	}
 	printf("%d\n",factorial);
}
