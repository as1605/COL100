#include <stdio.h>

_Bool candygame(int n) {
  if (n == 42) 
  	  return 1;
  if (n < 42) 
  	  return 0;
  _Bool a=0;
  if (n%2 == 0) 
  	  a |= candygame(n - (n/2));
  if ((n%3==0 || n%4==0) && (n%10 * ((n%100)/10))) 
  	  a |= candygame(n - ((n%10) * ((n%100)/10)));
  if (n%5==0) 
  	  a |= candygame(n - 42);
  return a;
}

int main() {
	int n;
	scanf("%d",&n);
	printf("%s\n",candygame(n) ? "True" : "False");
}
