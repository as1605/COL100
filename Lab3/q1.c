#include <stdio.h>
void main()
{
	int x;
	scanf("%d",&x);
	int r1,rev=0,photo=x;
	while(photo!=0)
	{
		r1=photo%10;
		rev=rev*10+r1;
		photo=photo/10;
	}
        if(rev==x){
            printf("Palindrome\n");  
	}else{
		printf("Not Palindrome\n");
	}	
}


