#include <stdio.h>

int myatoi(char A[], int length) {
	if (length>0) 
		return A[length-1]-'0'+10*myatoi(A, length-1);
	return 0;
}

_Bool check(char *s) {
	if (s[0]) {
		if ('0'<=s[0] && s[0]<='9')
			return check(&s[1]);
		return 0;
	}
	return 1;
}

int main() {
	char str[1000];
	int n;
	scanf("%d",&n);
	scanf("%s",str);
	if (str[0]=='-') {
		if (check(&str[1]))
			printf("%d\n",-1*myatoi(&str[1],n-1));
		else 
			printf("Invalid string\n");
	} else {
		if (check(str))
			printf("%d\n",myatoi(str,n));
		else
			printf("Invalid string\n");
	}
}
