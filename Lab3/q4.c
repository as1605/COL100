#include <stdio.h>
void main()
{
     float x,pi=3.14;//x is in degrees
     scanf("%f",&x);
     if(x>=0 && x<=180) {
         float cosx=1,term=1,rad=pi*x/180;//x is input in degrees ,so converting it to radians
         for(int i=2;i<=12;i+=2)
        {
           term*=(rad*rad)/(i*(i-1));
            if(i%4==0)
            {cosx+=term;}
            else{cosx-=term;}
         }
         printf("%.3f",cosx);}
     }







