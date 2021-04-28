#include<stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int x=0;
	for (int i=0; i<n; i++) {
		int t;
		scanf("%d",&t);
		x^=t;
	}
	printf("%d\n",x);
}

/*
PROOF:
1. 0^A=A
2. A^A=0
3. A^B=B^A
4. (A^B)^C=A^(B^C)
1,2,3,4 can be proved using truth tables.

3 and 4 imply that if we XOR a series of numbers, then the order does not matter.
2 implies that whenever a duplicate is found, the value after XOR will become 0.
1 implies that when the we XOR 0 with the unique value, we will have the unique value as the answer.

For this problem, as order does not matter, we can rearrange the values keeping the duplicates next to each other and the unique value at the end.
*/
