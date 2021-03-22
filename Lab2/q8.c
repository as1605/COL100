#include <stdio.h>
void main()
{
  int yr;
  scanf("%d",&yr);
  if( (yr%4==0 && yr%100!=0) || (yr%400==0) )
  {	 
	  printf("Leap year");
  }
  else
  {
	  printf("Not a leap year");
  }
}
