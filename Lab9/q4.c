#include <stdio.h>

_Bool possiblePal(char str[]) {
	int count[26]={0};
  for (int i=0; str[i]; i++) 
    count[str[i]-'a']++;
  int odd=0;
  for (int i=0; i<26; i++)
    odd+=count[i]%2;
  return odd<2;
}

int main() {
  char str[100];
  scanf("%s",str);
	printf("%s\n",possiblePal(str) ? "YES" : "NO" );
}
