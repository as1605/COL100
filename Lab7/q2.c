#include <stdio.h>
int main(){
      int n;
      scanf("%d ",&n);
      char str[100];
      scanf("%[^\n]s",str);
      int words=0;
      for(int i=1;i<n;i++){
         if( (str[i]==' ' || str[i]=='\t') && (str[i-1]>=33 && str[i-1]<=126) &&  (str[i+1]>=33 && str[i+1]<=126))
            words++;
      }
      if(words==0){
    printf("%d\n",words);
      }
      else{
        printf("%d\n",words+1);
      }
}

