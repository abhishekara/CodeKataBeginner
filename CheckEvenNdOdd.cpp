#include<stdio.h>
int main()
{

   int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number%2 == 0)
    {
         printf("You entered a even number ");
     }
        else
        {
		
            printf("You entered a odd number.");
    }
   
    return 0;
}
