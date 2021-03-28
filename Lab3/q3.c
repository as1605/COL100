#include <stdio.h>
void main(){
     int n;
     float t,sum=0;
     scanf("%d",&n);
     for(int i=0;i<n;i++){
         scanf("%f",&t);
	 sum+=t;
     }
     printf("%.2f\n",sum);
}

