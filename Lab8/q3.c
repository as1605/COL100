#include <stdio.h>
int toLowerCase(char str[],int len){
   for(int i=0;i<len;i++){
         if(str[i]>=65 && str[i]<=90)
	   str[i]+= 'a' - 'A';
   }
   return 0;
}
  int str_len(char str[]){
	  int len=0;
    while(str[len]){
      len++;
    }
    return len;
  }
int main(){
  char str[100];
  scanf("%[^\n]s",str);
    int len = str_len(str);
    toLowerCase(str,len);
    printf("%s",str);
	return 0;
}

