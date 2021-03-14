#include  <stdio.h>
#include <math.h>
void main()
{
   float a,b,c,D;
   scanf("%f %f %f",&a,&b,&c);
   if(a==0)
   { 
	   printf("Not a Quadratic Equation\n");
   }
   else
   {
      D=b*b-4*a*c;
     float r=sqrt(D);
     if(D>0)
     {
	     printf("%.3f %.3f\n",(-b-r)/(2*a),(-b+r)/(2*a));
     }

     else
	     if(D==0)
	     {
               printf("%.3f\n",-b/(2*a));
	     }
	     else
	     {
               printf("No Real Roots\n");
	     }
   }
}

