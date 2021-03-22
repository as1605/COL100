#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int f=n;
	while (n-->1) {
		f*=n;
	}
	printf("%d\n",f);
}
