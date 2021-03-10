#include<stdio.h>

void main() {
	char a,b,c,d;
	printf("Enter a 4 digit number\n");
	scanf("%c%c%c%c",&a,&b,&c,&d);
	printf("%c%c%c%c\n",d,c,b,a);
	if(d=='0') {
		printf("Invalid\n");
	}
	else {
		printf("Valid\n");
	}
}
