#include <stdio.h>

int main()
{
  int hour;
  int  min;

  for(hour = 0; hour < 24; hour++ )
  {


       for(min = 0; min < 60; min++)
       {
	    if(hour < 10)    
       	        printf("0%d:%d \n",hour,min);
	  
	     if(min < 10)
		printf("%d:0%d \n",hour,min);
       	    
	    else
	    printf("%d:%d \n",hour,min);
       }
   }

  return 0;
}
