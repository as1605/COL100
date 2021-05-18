#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  _Bool found=0, exist[100]={0};
  for (int i=0; i<n; i++) { 
    int t;
    scanf("%d",&t);
    if (exist[t]) {
      printf("%d ", t);
      found=1;
    }
    else exist[t]=1;
  }
  if (!found)
    printf("No duplicates exist!\n");
}
