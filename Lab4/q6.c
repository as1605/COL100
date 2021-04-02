#include <stdio.h>
int main(){
  int a,b,i,j,no_of_pairs=0;
  scanf("%d %d",&a,&b);
  for(i=a;i<=b;i++){
for(j=a;j<=i;j++){
  int l=i,m=j,temp;
  while(l%m!=0){
       temp=l%m;
     l=m;
     m=temp;
  }
  if(m!=1){
  no_of_pairs++;
  }
}
  }
   printf("%d\n",no_of_pairs);
}

