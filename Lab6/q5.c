#include <stdio.h>
int main(){
  unsigned int n ,i=1;
  scanf("%d",&n);
  int count=0;
    while(i){
       if(i&n){
          break;
       }
       else{
               count++;
       }
       i<<=1;
    }
    printf("%d\n",count);
    return 0;
}

