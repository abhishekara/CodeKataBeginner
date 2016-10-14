#include<stdio.h>
int main()
{
	int n, i;
	char ans;
	do{
	
	printf("\n-----------------Program for Table-----------------------\n");
	printf("\nEnter the number for table\n");
	scanf("%d",&n);
	printf("\nYour nummber is %d",n);
	printf("\nDo u want to another sum Enter Y/N\n");
    fflush(stdin);
    scanf("%c",&ans);
	for(i=1;i<=10;i++)
	{ 
	   
	printf("\n%d*%d=%d\n",n,i,n*i);
	}
	while(ans=='y'||'Y');
}
	//break;}
