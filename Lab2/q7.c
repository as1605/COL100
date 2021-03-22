#include <stdio.h>
void main()
{
  int n,i,factorial=1;
  scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  factorial=factorial*i;
 }
 printf("%d\n",factorial);
}

