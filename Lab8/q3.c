#include <stdio.h>

void toLowerCase(char *str) {
  for (int i=0; str[i]!='\0'; i++)
    if(str[i]>='A' && str[i]<='Z')
      str[i]+= 'a' - 'A';
}

int main() {
  char str[100];
  scanf("%[^\n]s",str);
  toLowerCase(str);
  printf("%s\n",str);
	return 0;
}
