#include <stdio.h>
void main()
{
  int t;
  //t=time in 24 hr format
  scanf("%d",&t);
  int hr=t/100,min=t%100;
  //as the first 2 digits represent the hours and the last 2 digitd represent minutes
  if(hr>=0 && hr<=23 && min>=0 && min<=59) 
  {
	  int min_after_midnight=hr*60+min;
       printf("%d",min_after_midnight);
  }
  else
  {
       printf("Invalid Input");
  }
}

