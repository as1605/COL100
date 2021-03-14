
#include <stdio.h>
void main()
{
	float l,w,h1,r2,h2,r3;
	//h1-height of cuboid,r2 and h2-radius and height of cylinder,r3-Radius of sphere;
	scanf("%f %f %f",&l,&w,&h1);
	scanf("%f %f",&r2,&h2);
	scanf("%f",&r3);
	float V1,V2,V3,pi=3.14159265;
	// V1,V2,V3 are the volumes of Cuboid ,Cylinder and Sphere respectively;
	V1=l*w*h1;
	V2=pi*r2*r2*h2;
        V3=4*pi*r3*r3*r3/3;
	printf("%.2f\n",V1);
        printf("%.2f\n",V2);
	printf("%.2f\n",V3);
}

