#include <stdio.h>

const long long int MAX=9223372036854775807;
const long long int MIN=-9223372036854775808;

void main() {
	long long int a, b;
	printf("Enter two numbers, please keep them between %lld and %lld and avoid giving 0 as 2nd number\n",MIN,MAX);
	scanf("%lld %lld",&a,&b);

	long long int sum=a+b;
	if (a == sum-b) {
		printf("%lld + %lld = %lld\n",a,b,sum);
	} else {
		printf("\033[1;33m");
		printf("Warning: The result for sum overflows\n");
		printf("\033[0m");
	}

	long long int dif=a-b;
	if (a == dif+b) {
		printf("%lld - %lld = %lld\n",a,b,dif);
	} else {
		printf("\033[1;33m");
		printf("Warning: The result for difference overflows\n");
		printf("\033[0m");
	}

	long long int mul=a*b;
	if (b == 0) {
		printf("%lld * %lld = %lld\n",a,b,mul);
	}
	else if (a == mul/b) {
		printf("%lld * %lld = %lld\n",a,b,mul);
	}
	else {
		printf("\033[1;33m");
		printf("Warning: The result for multiplication overflows\n");
		printf("\033[0m");
	}

	if (b != 0) {
		printf("%lld / %lld = %lld\n",a,b,a/b);
		printf("%lld %% %lld = %lld\n",a,b,a%b);
	} else {
		printf("\033[1;31m");
		printf("Error: Cannot divide or take modulo by 0\n");
		printf("\033[0m");
	}
}
