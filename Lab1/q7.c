#include <stdio.h>
void main()
{
  int n;
	scanf("%d",&n);
	if(n>=3)
	{
           float Angle=(float)((n-2)*180)/n;
	   printf("%f\n",Angle);
	}
	else
	{
		printf("Invalid Input\n");
	}

}

