#include <stdio.h>
void main(){
	int n;
	float a,d;
	scanf("%d %f %f",&n,&a,&d);
	for(int i=1;i<=n;i++){
            printf("%.2f ",a+(i-1)*d);
	}
}

