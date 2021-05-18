#include <stdio.h>

_Bool isSorted(int A[], int n) {
  _Bool asc=1, des=1;
  for (int i=1; i<n; i++)
    if (A[i-1]<A[i])
      des=0;
    else if (A[i-1]>A[i])
      asc=0;
  return asc||des;
}

int main() {
  int n;
  scanf("%d",&n);
  int A[100];
  for(int i=0; i<n; scanf("%d", &A[i++]));
  printf("%s\n", isSorted(A,n) ? "true" : "false");
}