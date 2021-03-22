#include <stdio.h>
void main()
{
  char choice;
 float pi=3.14159265;
  scanf("%c",&choice);
   float r,l,w,b,h;
  switch(choice)
  {
       case 'C':
	       scanf("%f",&r);
	       printf("The area is %.2f",pi*r*r);
	       break;
      case 'R':
	       scanf("%f %f",&l,&w);
	       printf(" The area is %.2f",l*w);
	       break;
      case 'T':
                scanf("%f %f",&b,&h);
               printf("The area is %.2f",b*h/2);
               break;	       

      default:
	       printf("Enter valid Input");
  }
}
