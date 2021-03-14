#include <stdio.h>
void main()
{
	int x;
	scanf("%d",&x);
	int r1,rev=0;
	while(x!=0)
	{
		r1=x%10;
		rev=rev*10+r1;
		x=x/10;
	}
	printf("%d\n",rev);
	if(rev>=1000)
		printf("Valid");
	else
		printf("Invalid");
}





