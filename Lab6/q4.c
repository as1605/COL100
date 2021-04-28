#include <stdio.h>
int main(){
  int n1,n2,count=0;
  scanf("%d %d",&n1,&n2);
  unsigned int i=1;
    while(i){
       if(i&(n1^n2)){
          count++;
       }
       i<<=1;
    }
    printf("%d\n",count);
}

