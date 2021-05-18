#include <stdio.h>
void encrypt(char str[],int k) {
   int i;
   int p_i,c_i;
   while(str[i]) {
     if(str[i]>=65 && str[i]<=90) {
         p_i = str[i]-65;
	 c_i=(p_i +k)%26;// Caesar's cipher
	 str[i]='A'+c_i;
     }
     else if(str[i]>=97 && str[i]<=122) {
          p_i= str[i]-97;
         c_i=(p_i +k)%26;//Ceasar's cipher
         str[i]='a'+c_i;
     }
    
     i++;
   }
   printf("%s\n",str);
}
void decrypt(char str[],int k) {
    int i;
   int p_i,c_i;
   while(str[i]) {
     if(str[i]>=65 && str[i]<=90) {
         p_i = str[i]-65;
         c_i=(p_i-k) % 26;//Caesar's cipher 
	 if(c_i<0)
           c_i+=26;
         str[i]='A'+c_i;
     }
     else if(str[i]>=97 && str[i]<=122) {
          p_i= str[i]-97;
         c_i=(p_i -k)%26;//Caesar's cipher
	 if(c_i<0)
		 c_i+=26;
         str[i]='a'+c_i;
     }

     i++;
   }

   printf("%s\n",str);
}
int main() {
       char str[100];
       int k;
       scanf("%[^\n]s",str);
       scanf("%d",&k);
       encrypt(str,k);
       fflush(stdin);
       decrypt(str,k);
	return 0;
}

