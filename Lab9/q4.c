#include <stdio.h>
#define NO 0
#define YES 1
_Bool possiblePal(char str[]) {
	int i=0;
	int count[26]={0};
     while(str[i]) {
          count[str[i]-97]++;
	  i++;
     }
         int flag=0;
      for( i=0;i<26 ;i++) {
          if(count[i]%2!=0 && flag==0) {
             flag=1;
	  }
	  else if(count[i]%2!=0 && flag==1) {
              return NO;
	  }
      }
    return YES;
}
int main() {
        char str[100];
        scanf("%s",str);
	printf("%s\n",possiblePal(str) ? "YES" : "NO" );
        return 0;
}

