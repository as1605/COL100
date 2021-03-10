#include <stdio.h>

const long long int MAX=9223372036854775807;
const long long int MIN=-9223372036854775808;

void main() {
	long long int a, b;
	printf("Enter two numbers, please keep them between %lld and %lld and avoid giving 0 as 2nd number\n",MIN,MAX);
	scanf("%lld %lld",&a,&b);
	if ((b>0 && a>MAX-b) || (b<0 && a<MIN-b)) {
		printf("\033[1;33m");
		printf("Warning: The result may not fit in\n");
		printf("\033[0m");
	}
	printf("%lld + %lld = %lld\n",a,b,a+b);
	if ((b<0 && a>MAX+b) || (b>0 && a<MIN+b)) {
		printf("\033[1;33m");
		printf("Warning: The result may not fit in\n");
		printf("\033[0m");
	}
	printf("%lld - %lld = %lld\n",a,b,a-b);
	if (b!=0) {
		if (a>(MAX-1)/b+1 || a<MIN/b) {
			printf("\033[1;33m");
			printf("Warning: The result may not fit in\n");
			printf("\033[0m");
		}
	}
	printf("%lld * %lld = %lld\n",a,b,a*b);
	if (b==0) {
		printf("\033[1;31m");
		printf("Error: Cannot divide by 0\n");
		printf("\033[0m");
	} else {
		printf("%lld / %lld = %lld\n",a,b,a/b);
		printf("%lld %% %lld = %lld\n",a,b,a%b);
	}
}
