#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year to check leap or not\n");
	scanf("%d",&year);
	  	if(year%4==0)
	  	{
	  		printf("%d is a leap year.",year);
	  		
		  }
else
 			{ 
			 printf("%d is not a leap year.",year); 
		 }
return 0;
}
