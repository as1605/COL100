#include <stdio.h>
int const size=100;

int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    int A[size][size];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i=0; i<m+n-1; i++) {
        for (int j=0; j<i+1; j++)
            if (i-j<m)
                if (j<n)
                    printf("%d ", A[i-j][j]);
        printf("\n");
    }
}
