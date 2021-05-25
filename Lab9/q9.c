#include <stdio.h>

void rotate(int *a, int *b, int *c, int *d) {
	*d ^= *c;
	*c ^= *d;
	*c ^= *b;
	*b ^= *c;
	*b ^= *a;
	*a ^= *b;
	*b ^= *a;
	*c ^= *a;
	*d ^= *a;
}

int main() {
	int A[1000][1000];
	int N;
	scanf("%d",&N);

	for (int i=0; i<N; i++)
		for (int j=0; j<N; j++)
			scanf("%d",&A[i][j]);

	for (int i=0; i<N/2; i++)
		for (int j=i; j<N-i-1; j++)
			rotate(&A[i][j], &A[j][N-i-1], &A[N-i-1][N-j-1], &A[N-j-1][i]);

	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}