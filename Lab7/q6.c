#include <stdio.h>
#include <stdbool.h>
int main(){
   int n,i;
   scanf("%d",&n);
   int temp,min,min2;
   bool found2=0;
    for(i=0;i<n;i++){
       scanf("%d",&temp);
       if(i==0){
           min=temp;
       }
       else if(i==1){
           if(temp<min){
               min2=min;
               min=temp;
               found2=1;
           }
	   else if(temp>min){
                min2=temp;
		found2=1;
	   }
       }
       else{
           if(temp<min){
               min2=min;
               min=temp;
               found2=1;
           }
           else if((found2==0 && temp>min) || (temp<min2 && temp>min)){
               min2=temp;
               found2=1;
           }
       }
    }
if(found2==1)
   printf("%d",min2);
       else
           printf("Second smallest no. doesn't exist");
}

