#include <stdio.h>
int isSubstring(char s1[],char s2[]) {
  int i=0,j,ans,flag=0;
    while(s1[i]) {
      if(s1[i]==s2[0]||s1[i]==(s2[0]+'a'-'A')||s1[i]==(s2[0]+'A'-'a')) {
	      flag=1;
	      ans=i+1;
	      j=1;
	      i++;
          while(s2[j]) {
	     if(s1[i]!=s2[j]){
             flag=0;
	     break;
	     }
	     j++;
	     i++;
	  }
	  if(flag==1)
            return ans;
        }
      i++;
    }  
    return -1;

}
int main(){
  char s1[100],s2[100];
  scanf("%[^\n]s",s1);
  getchar();
  scanf("%[^\n]s",s2);
    printf("%d\n",isSubstring(s1,s2));
	return 0;
}

