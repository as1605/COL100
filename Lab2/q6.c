#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int a=0, b=1;
	for (int i=0; i<n; i++) {
		b=a+b;
		a=b-a;
	}
	printf("%d\n",a);
	return 0;
}
