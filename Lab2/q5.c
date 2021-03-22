#include <stdio.h>

void main() {
	char choice;
	float pi=3.14159265;
	scanf("%c",&choice);
	switch (choice) {
    	case 'C':
			float r;
	       	scanf("%f",&r);
	       	printf("The area is %.2f\n",pi*r*r);
	       	break;
      	case 'R':
			float l,w;
	      	scanf("%f %f",&l,&w);
	      	printf(" The area is %.2f\n",l*w);
	       	break;
      	case 'T':
			float b,h;
           	scanf("%f %f",&b,&h);
            printf("The area is %.2f\n",(b*h)/2);
           	break;	       
      	default:
	     	printf("Invalid Input!\n");
  	}
}
