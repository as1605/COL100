#include <stdio.h>

void main() {
	float marks;
	scanf("%f",&marks);
	if (marks<=100 && marks>=86) {
		printf("A+\n");
	} else if(marks<86 && marks>=71) {
		printf("A-\n");
	} else if(marks<71 && marks>=56) {
		printf("B+\n");
	} else if(marks<56 && marks>=41) {
		printf("B-\n");
	} else if(marks<41 && marks>=26) {
		printf("C\n");
	} else if(marks<26 && marks>=0) {
		printf("F\n");
	} else {
		printf("Invalid\n");
	}
}
