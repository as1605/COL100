#include <stdio.h>
#define true 1
#define false 0
int isPangram(char sentence[]) {
  int count[26]={0};//all elementsinitialized to 0
 int i=0;
  while(sentence[i]) {
	  if(sentence[i]>=97 && sentence[i]<=122) {
              count[sentence[i]-'a']++;
	  }
	  i++;
  }
  for(i=0;i<26;i++) {
     if(count[i]==0)
	     return false;
  }
  return true;

}
int main() {
	char str[100];
   scanf("%[^\n]s",str);
   if(isPangram(str)) 
	   printf("true");
   else
	   printf("false");
}

