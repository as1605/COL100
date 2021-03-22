#include <stdio.h>

void main() {
    int x, n, power=1;
    scanf("%d %d",&x,&n);
    for(int i=0; i<n; i++) {
    	power*=x;
    }
    printf("%d\n",power);
}
