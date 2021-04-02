#include <stdio.h>
int main(){
   int n,i,j;
   scanf("%d",&n);
   for(i=n;i>0;i--){
       for(j=n;j>i;j--){
           printf(" ");
       }
       for(j=n;j>=i;j--){
           printf("#");
       }
       for(j=4*i-4;j>0;j--){
           printf(" ");
       }
       for(j=n;j>=i;j--){
           printf("#");
       }
      printf("\n");
   }
   for(i=1;i<=n;i++){
       for(j=n;j>i;j--){
           printf(" ");
       }
       for(j=n;j>=i;j--){
           printf("#");
       }
       for(j=4*i-4;j>0;j--){
           printf(" ");
       }
       for(j=n;j>=i;j--){
           printf("#");
       }
      printf("\n");
   }
   
}

