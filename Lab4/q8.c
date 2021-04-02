#include <stdio.h>
int sum_of_sq(int num){
     int a,b;
     for(a=1;a*a<=num;a++){
      for(b=0;b<=a;b++){
          if(num==(a*a+b*b)){
            return 0;	    // returns 0 if the number given can be expressed as a sum of squares of 2 non-negative integers 
           }
      }
     }
     return 1;//else returns 1
}
int main(){
     int n,num;
     scanf("%d",&n);
     int check,count=0;
     for(num=1;num<=n;num++){
         check=sum_of_sq(num);//program to check whether the number given can be expressed as a sum of squares of 2 non-negative integers or not
	 if(check==0){
         count++;
	 }
     }
     printf("%d\n",count);
}

