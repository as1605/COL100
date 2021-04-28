#include<stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	unsigned int i=1;
	int count=0;
	while (i) {
		if (i&n) { 
			count++;
		}
		i<<=1;
	}
	printf("%d\n",count);
}
