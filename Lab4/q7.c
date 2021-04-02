#include <stdio.h>
int number(int x){
 int i,sum_of_digits=0,num_x=0,copy;
copy=x;
while(copy!=0){
  sum_of_digits += copy%10;
  copy=copy/10;
}
for(i=1;i<=x;i++){
 if(i % sum_of_digits==0){
      num_x++;              }
}
return num_x;
}
int main(){
    int n,x,num_x,fn=0;
    scanf("%d",&n);
    for(x=1;x<=n;x++){
        num_x=number(x);//number(x), a function to determine the no. less than or equal to x divisible by the sum of its digits 
         fn+=num_x;
    }
    printf("%d\n",fn);
}

