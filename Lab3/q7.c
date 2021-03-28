#include <stdio.h>
void main(){
      int a,b;
      scanf("%d %d",&a,&b);
      if(a>b){
         b=a+b;
	 a=b-a;
	 b=b-a;//exchanging a and b so that the greater no. is b without using temporary variable
      }
      int temp;
      while(b%a!=0){
             temp=b%a;
	     b=a;
	     a=temp;
      }
      printf("%d\n",a);
}

