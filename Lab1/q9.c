#include <stdio.h>
void main()
{
     float A_I[2],A_D[2],A_T[2];
     // A_I[2],A_D[2],A_T[2] denote the arrays of initial price,discount and tax respectively of sweater and shoes respectively 
     int i;
     for(i=0;i<2;i++)
     {
       scanf("%f %f %f",&A_I[i],&A_D[i],&A_T[i]);
     } 

     float final_bill=0,A_F[2];
     //A_F[2] denotes the array of final price of sweater and shoes respectively                                                                                                                     
     for(i=0;i<2;i++)
     {      
       if( A_I[i]>=0 && A_D[i]>=0  && A_D[i]<=100 && A_T[i]>=0 && A_T[i]<=100)
       {
          A_F[i]=(A_I[i]*(100-A_D[i])/100)*(100+A_T[i])/100;
	final_bill=final_bill+A_F[i];  
       }

       else
       {
              printf("Invalid Input");
	      return;
       }

     }
     printf("%.2f",final_bill);
}

