#include <stdio.h>
int maxProfit(int prices[],int n) {
	int max_prof = prices[1]-prices[0], mbp=prices[0];//mbp denotes minimum buy price
    for(int i=1;i<n-1;i++){
       if(prices[i]< mbp)
	       mbp=prices[i];
       if(prices[i+1]-mbp > max_prof)
	       max_prof=prices[i+1]-mbp;
    }
    if(max_prof<0)
	    return 0;
    else 
	    return max_prof;
}
int main() {
        int n;
        int prices[100];
        scanf("%d",&n);
        for(int i=0;i<n;i++)
          scanf("%d",&prices[i]);
        printf("%d\n",maxProfit(prices,n));
        return 0;
}

