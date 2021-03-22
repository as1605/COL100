#include <stdio.h>
#include <math.h>
void main()
{
    int x,n,i,power=1;
    scanf("%d %d",&x,&n);
    for(i=0;i<n;i++)
    {
       power=power*x;
	    }
     printf("%d",power);
}

