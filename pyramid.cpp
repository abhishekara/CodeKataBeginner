
#include<stdio.h>
int main()
{
	 int n,i,j,k;
	 int p,q,r;
	 n=5;
	 for(i=0;i<n;++i)
	  {
	  	 for(j=0;j<n*i;++j)
	  	 {
	  	 	
	  	 	printf("");
	  	 	
	  	 	 }
		   for(k=0;k<n-i;++k)
		   {
		   	
		   	printf("*");
		   }
	  printf("\n");
	  }
	 for(i=5;i>=1;i--)
{
for(j=5;j>i;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("*");
}
printf("\n");
}
//getch();

	  return 0;
}
