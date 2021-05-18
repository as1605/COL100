#include <stdio.h>
#include <stdbool.h>
#define SZ 100
#define True 1
#define False 0
int no_of_friends(int n,int fr[SZ][SZ]) {
   int no=0;
   for(int i=1;i<n;i++) {
     for(int j=0;j<i;j++) {
        if(fr[i][j])
		no++;
     }
   }
	return no;
}
int common_friend(int n, int fr[SZ][SZ], int x, int y) {
      for(int i=0;i<n;i++) {
         if(fr[x][i] && fr[y][i]) 
		 return True;
      }
      return False;
}
int main() {
  int n;
   scanf("%d",&n);
    int fr[SZ][SZ];
      for(int i=0;i<n;i++) {
          for( int j=0;j<n;j++) {
              scanf("%d",&fr[i][j]);
	  }
      }
      int x,y;
	      scanf("%d %d",&x,&y);
      printf("Numbers of pairs of friends = %d\n",no_of_friends(n,fr));
      if(common_friend(n,fr,x,y))
	      printf("true\n");
      else
	      printf("false\n");
	return 0;
}

